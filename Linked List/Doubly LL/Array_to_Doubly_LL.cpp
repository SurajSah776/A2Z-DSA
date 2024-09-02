/*    Convert an Array to Doubly Linked List
Given an integer array arr of size n. Construct the doubly linked list from arr and return the head of it.

Example 1:
Input:
n = 5
arr = [1,2,3,4,5]
Output:
1 2 3 4 5
Explanation: Linked list for the given array will be 1<->2<->3<->4<->5.
*/

#include <bits/stdc++.h>
using namespace std;

// Class to define the Structure of the DLL
class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data, Node *next, Node *back)
    {
        this->data = data;
        this->next = next;
        this->back = back;
    }

    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->back = nullptr;
    }
};

// Function to convert an Array to Doubly LL
Node *constructDLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        prev->next = temp;
        temp->back = prev;
        prev = temp;
    }

    return head;
}

// Function to print the Doubly LL
void printDLL(Node *head)
{
    if (head == NULL)
    {
        cout << "Empty !!!" << endl;
    }

    Node *mover = head;
    while (mover)
    {
        cout << mover->data << "  ";
        mover = mover->next;
    }
}

// Driver Code
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = constructDLL(arr);

    printDLL(head);

    return 0;
}