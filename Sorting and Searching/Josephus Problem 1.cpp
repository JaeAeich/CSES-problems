#include <bits/stdc++.h>
using namespace std;

// Linked List
class ListNode
{
public:
    int val;
    ListNode *next;

    ListNode(int x)
    {
        this->val = x;
        this->next = NULL;
    }
};

// Function to push a new node at tail of linked list.
void pushTail(ListNode *&tail, int val)
{
    ListNode *temp = new ListNode(val);
    tail->next = temp;
    tail = tail->next;
}

int main()
{
    int n;
    cin >> n;
    // Creating a singly linked list of n numbers.
    ListNode *head = new ListNode(1);
    ListNode *tail = head;
    for (int i = 2; i <= n; i++)
    {
        pushTail(tail, i);
    }
    // Making a circular linked list.
    tail->next = head;
    ListNode *temp = head;
    // Transversing according to question and modifying linked list.
    while (true)
    {
        if (temp->next->val == temp->val)
        {
            cout << temp->val;
            break;
        }
        cout << temp->next->val << " ";
        // Deleting node.
        temp->next = temp->next->next;

        temp = temp->next;
    }
    return 0;
}
// Code By - Jae Aeich