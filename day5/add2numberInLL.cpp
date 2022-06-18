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

Node *addTwoNumbers(Node *head1, Node *head2)
{
    int carry = 0;
    Node *ans = new Node(0);
    Node *res = ans;

    while (1)
    {
        int a = 0, b = 0;
        if (head1)
        {
            a = head1->data;
            head1 = head1->next;
        }
        if (head2)
        {
            b = head2->data;
            head2 = head2->next;
        }
        carry += a + b;
        ans->data = (carry % 10);
        //  cout<<" -> "<<ans->data;
        carry /= 10;
        if (head1 != NULL || head2 != NULL || carry == 1)
        {
            ans->next = new Node(0);
            ans = ans->next;
        }
        else
            break;
    }
    return res;
    // Write your code here.
}