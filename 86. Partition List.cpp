///86. Partition List
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
    ListNode* partition(ListNode* head, int x) 
    {
        vector<int> v;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            if(curr->val<x)
                v.push_back(curr->val);
            curr=curr->next;
        }
        curr=head;
        while(curr!=NULL)
        {
            if(curr->val>=x)
                v.push_back(curr->val);
            curr=curr->next;
        }
        curr=head;
        int cnt=0;
        while(curr!=NULL)
        {
            curr->val=v[cnt++];
            curr=curr->next;
        }
        return head;
    }
};
