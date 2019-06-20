///24. Swap Nodes in Pairs
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
    ListNode* swapPairs(ListNode* head) 
    {
        ListNode* curr=head;
        while(curr!=NULL && curr->next!=NULL)
        {
            int tmp=curr->val;
            curr->val=curr->next->val;
            curr->next->val=tmp;
            curr=curr->next;
            if(curr!=NULL)
                curr=curr->next;
                
        }
        return head;
    }
};
