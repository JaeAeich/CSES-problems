#include <bits/stdc++.h>
using namespace std;

// Linked List
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode(int x)
    {
        this->val = x;
        this->next = NULL;
        this->prev = NULL;
    }
};

// Function to push a new node at tail of linked list.
void pushTail(ListNode *&tail, int val)
{
    ListNode *temp = new ListNode(val);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

int main()
{
    int n, k;
    cin >> n >> k;
    k %= (n);
    cout << k << endl;
    // Creating a singly linked list of n numbers.
    ListNode *head = new ListNode(1);
    ListNode *tail = head;
    for (int i = 2; i <= n; i++)
    {
        pushTail(tail, i);
    }
    // Making a circular linked list.
    tail->next = head;
    head->prev = tail;
    ListNode *temp = head;
    while (true)
    {
        // If only one node is left, print that node and break out.
        if (temp->next->val == temp->val)
        {
            cout << temp->val;
            break;
        }
        // Moving k nodes.
        for (int i = 0; i < k; i++)
        {
            temp = temp->next;
        }
        // Printing the nth node.
        cout << temp->val << " ";
        ListNode *nPtr = temp->next;
        ListNode *prevPtr = temp->prev;
        // Deleting the nth node.
        temp->prev->next = temp->next;
        // moving to next node.
        temp = nPtr;
        temp->prev = prevPtr;
        k--;
    }
    return 0;
}
// Code By - Jae Aeich