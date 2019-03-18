///876. Middle of the Linked List
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
    ListNode* middleNode(ListNode* head) 
    {
        if(head==NULL) return NULL;
        ListNode* curr=head;
        int cnt=0;
        while(curr)
        {
            cnt++;
            curr=curr->next;
        }
        cnt/=2;
        curr=head;
        while(cnt--)
            curr=curr->next;
        return curr;
    }
};
