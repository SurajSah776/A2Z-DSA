/*    Array to Linked List
Geek loves linked list data structure. Given an array of integer arr of size n, Geek wants to construct the linked list from arr.

Construct the linked list from arr and return the head of the linked list.

Example 1:
Input:
n = 5
arr = [1,2,3,4,5]
Output:
1 2 3 4 5
Explanation: Linked list for the given array will be 1->2->3->4->5.
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

// Function to print the Singly Linked List
void printSLL(Node *head)
{
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "  ";
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
    printSLL(head);

    return 0;
}