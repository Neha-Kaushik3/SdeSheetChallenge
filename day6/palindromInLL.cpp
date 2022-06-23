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
LinkedListNode<int> *reverse(LinkedListNode<int> *head)
{
    if (!head || !head->next)
        return head;
    LinkedListNode<int> *nHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return nHead;
}
bool isPalindrome(LinkedListNode<int> *head)
{
    // Write your code here.
    if (!head || !head->next)
        return true;
    LinkedListNode<int> *slow = head, *fast = head, *p = head;
    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow->next = reverse(slow->next);
    slow = slow->next;
    /*cout<<"ll - ";
    while(p){
        cout<<p->data;
        p = p->next;
    }*/
    while (slow)
    {
        //    cout<<"p = "<<p->data<<" s = "<<slow->data<<endl;
        if (p->data != slow->data)
            return false;
        slow = slow->next;
        p = p->next;
    }
    return true;
}