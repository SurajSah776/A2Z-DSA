/*    Delete Node in a Linked List
There is a singly-linked list head and we want to delete a node node in it.

You are given the node to be deleted node. You will not be given access to the first node of head.

All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.

Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:

The value of the given node should not exist in the linked list.
The number of nodes in the linked list should decrease by one.
All the values before node should be in the same order.
All the values after node should be in the same order.
Custom testing:

For the input, you should provide the entire linked list head and the node to be given node. node should not be the last node of the list and should be an actual node in the list.
We will build the linked list and pass the node to your function.
The output will be the entire list after calling your function.


Example 1:
Input: head = [4, 5, 1, 9], node = 5
Output: [4, 1, 9]
Explanation: You are given the second node with value 5, the linked list should become 4 -> 1 -> 9 after calling your function.
*/

#include <bits/stdc++.h>
using namespace std;

// Class to define the node Structure
class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

// Function to convert an array to Linked List
Node *constructLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i]);
        mover->next = newNode;
        mover = newNode;
    }

    return head;
}

// Function to delete a node from LL
void deleteNode(Node *node)
{
    Node *nextNode = node->next;
    node->data = nextNode->data;
    node->next = nextNode->next;
}

// Function to Print the LL
void printLL(Node *head)
{
    if (head == nullptr)
    {
        cout << "Empty!!" << endl;
    }
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

// Driver Code
int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    // Taking user input
    vector<int> arr(size);

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // Calling the function
    Node *head = constructLL(arr);

    // Printing the Linked List
    printLL(head);

    deleteNode();

    return 0;
}