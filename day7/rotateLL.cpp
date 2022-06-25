#include <bits/stdc++.h>
/********************************

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

********************************/

Node *rotate(Node *head, int k)
{
    // Write your code here.
    int len = 1;
    Node *temp = head;
    while (temp->next)
    {
        len++;
        temp = temp->next;
    }
    temp->next = head;
    // cout<<"k before mod "<<k<<endl;
    k = k % len;
    k = len - k;
    // cout<<"k after mod "<<k<<endl;
    temp = head;
    Node *fast = head;
    for (int i = 0; i < k - 1; i++)
    {
        fast = fast->next;
    }
    head = fast->next;
    fast->next = NULL;
    //  cout<<"\n move fast";

    return head;
}

#include <bits/stdc++.h>
/********************************

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

********************************/

Node *rotate(Node *head, int k)
{
    // Write your code here.
    int len = 0;
    Node *temp = head;
    while (temp)
    {
        len++;
        temp = temp->next;
    }
    // cout<<"k before mod "<<k<<endl;
    k = k % len;
    // cout<<"k after mod "<<k<<endl;
    temp = head;
    Node *fast = head;
    //  cout<<"\n move fast";
    for (int i = 0; i < k; i++)
    {
        //     cout<<fast->data<<" -";
        fast = fast->next;
    }
    // cout<<"\n move temp and fat";
    while (fast->next)
    {
        //    cout<<fast->data<<" -"<<temp->data<<" ;";
        temp = temp->next;
        fast = fast->next;
    }

    fast->next = head;
    head = temp->next;
    temp->next = NULL;
    return head;
}