///19. Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* dummy= new ListNode(-1);
        dummy->next=head;
        int sz=0;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            sz++;
            curr=curr->next;
        }
        sz-=n;
        curr=dummy;
        while(sz--)
            curr=curr->next;
        curr->next=curr->next->next;
        return dummy->next;
    }
};
