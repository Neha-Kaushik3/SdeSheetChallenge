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

int findIntersection(Node *firstHead, Node *secondHead)
{
    Node *p1 = firstHead, *p2 = secondHead;
    int a = 0, b = 0;
    while (p1)
    {
        p1 = p1->next;
        a++;
    }
    while (p2)
    {
        p2 = p2->next;
        //  a--;
        b++;
    }
    int diff = abs(a - b);
    p1 = firstHead;
    p2 = secondHead;
    if (a > b)
        while (diff--)
            p1 = p1->next;
    else
        while (diff--)
            p2 = p2->next;
    while (p1->next && p2->next && p1 != p2)
    {
        p1 = p1->next;
        p2 = p2->next;
    }
    if (p1 == p2)
        return p1->data;
    return -1;
}