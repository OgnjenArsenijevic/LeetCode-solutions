///21. Merge Two Sorted Lists
///Author: Ognjen Arsenijevic
///username: ognjen1998
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution 
{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        ListNode* l3=NULL;
        if(l1==NULL) return l2;
        if(l2==NULL) return l1;
        if(l1->val<l2->val)
        {
            l3=l1;
            l1=l1->next;
        }
        else
        {
            l3=l2;
            l2=l2->next;
        }
        ListNode* curr=l3;
        while(l1 && l2)
        {
            if(l1->val<l2->val)
            {
                curr->next=l1;
                l1=l1->next;
            }
            else
            {
                curr->next=l2;
                l2=l2->next;
            }
            curr=curr->next;
        }
        while(l1)
        {
            curr->next=l1;
            l1=l1->next;
            curr=curr->next;
        }
        while(l2)
        {
            curr->next=l2;
            l2=l2->next;
            curr=curr->next;
        }
        return l3;
    }
};
