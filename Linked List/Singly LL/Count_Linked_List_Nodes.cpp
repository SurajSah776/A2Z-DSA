/*    Count Linked List Nodes
Given a singly linked list. The task is to find the length of the linked list, where length is defined as the number of nodes in the linked list.

Examples :
Input: LinkedList : 1->2->3->4->5
Output: 5
Explanation: Count of nodes in the linked list is 5, which is its length.

Time : O(N)
Space: O(1)
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

// Function to count the nodes in Linked List
int getCount(Node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    int count = 0;
    Node *temp = head;
    while (temp)
    {
        count++;
        temp = temp->next;
    }

    return count;
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
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << "  ";
        temp = temp->next;
    }

    // Count of nodes in LL
    int count = getCount(head);

    cout << "\nNo. of Nodes : " << count << endl;
    return 0;
}