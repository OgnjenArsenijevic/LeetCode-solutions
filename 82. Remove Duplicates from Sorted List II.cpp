///82. Remove Duplicates from Sorted List II
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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode* dummy=new ListNode(-1);
        dummy->next=head;
        ListNode* curr=head;
        ListNode* prev=dummy;
        while(curr!=nullptr)
        {
            bool flag=false;
            while(curr!=nullptr && curr->next!=nullptr && curr->val==curr->next->val)
            {
                curr->next=curr->next->next;
                flag=true;
            }
            if(flag)
                prev->next=curr->next;
            else
                prev=curr;
            curr=curr->next;
        }
        return dummy->next;
    }
};
