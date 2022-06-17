#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *removeKthNode(LinkedListNode<int> *head, int n)
{
    if (n == 0)
        return head;
    LinkedListNode<int> *slow = head;
    LinkedListNode<int> *fast = head;
    int i = 0;
    while (i++ < n)
    {
        fast = fast->next;
    }
    if (!fast)
        return head->next;
    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next;
    }
    fast = slow->next;
    slow->next = slow->next->next;
    delete fast;
    return head;
}