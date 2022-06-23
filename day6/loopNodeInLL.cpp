#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node *firstNode(Node *head)
{
    //    Write your code here.
    if (!head || !head->next)
        return NULL;
    Node *slow = head, *fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
        if (!fast || !fast->next)
            return NULL;
    } while (slow != fast);
    fast = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}