///25. Reverse Nodes in k-Group
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
    ListNode* reverseKGroup(ListNode* head, int k)
    {
        vector<int> v;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        for(int i=0;i+k-1<v.size();i+=k)
        {
            int l=i,r=i+k-1;
            while(l<r)
                swap(v[l++],v[r--]);
        }
        curr=head;
        int cnt=0;
        while(curr!=nullptr)
        {
            curr->val=v[cnt++];
            curr=curr->next;
        }
        return head;
    }
};
