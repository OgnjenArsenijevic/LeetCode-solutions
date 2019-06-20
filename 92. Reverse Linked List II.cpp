///92. Reverse Linked List II
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
    ListNode* reverseBetween(ListNode* head, int m, int n) 
    {
        vector<int> v;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        m--;
        n--;
        while(m<n)
            swap(v[m++],v[n--]);
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
