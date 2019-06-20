///203. Remove Linked List Elements
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
    ListNode* removeElements(ListNode* head, int val)
    {
        ListNode* curr=head;
        while(curr!=NULL)
        {
            while(curr->next!=NULL && curr->next->val==val)
                curr->next=curr->next->next;
            curr=curr->next;
        }
        if(head!=NULL && head->val==val)
            return head->next;
        else
            return head;
    }
};
