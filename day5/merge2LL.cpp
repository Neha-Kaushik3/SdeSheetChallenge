/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == NULL && list2 != NULL)
            return list2;
        if (list1 == NULL && list2 == NULL)
            return list2;
        if (list1 != NULL && list2 == NULL)
            return list1;
        ListNode *p1 = list1;
        ListNode *p2 = list2;
        ListNode *nHead;
        ListNode *head;
        if (p1->val <= p2->val)
        {
            head = p1;
            nHead = p1;
            p1 = p1->next;
        }
        else
        {
            head = p2;
            nHead = p2;
            p2 = p2->next;
        }

        while (p1 != NULL && p2 != NULL)
        {
            if ((p1->val) <= (p2->val))
            {
                nHead->next = p1;
                p1 = p1->next;
            }
            else
            {
                nHead->next = p2;
                p2 = p2->next;
            }
            nHead = nHead->next;
        }
        if (p1 != NULL)
        {
            nHead->next = p1;
        }
        if (p2 != NULL)
        {
            nHead->next = p2;
        }
        return head;
    }
};