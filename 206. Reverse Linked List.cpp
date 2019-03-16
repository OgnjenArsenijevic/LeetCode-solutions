///206. Reverse Linked List
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
    ListNode* reverseList(ListNode* head) 
    {
        ListNode *prev=NULL;
        ListNode *next=NULL;
        while(head!=NULL)
        {
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
};
