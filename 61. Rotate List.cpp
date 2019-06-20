///61. Rotate List
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
    ListNode* rotateRight(ListNode* head, int k)
    {
        if(head==nullptr) return head;
        vector<int> v;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        k%=v.size();
        if(k==0) return head;
        curr=head;
        int cnt=v.size()-k;
        while(curr!=nullptr)
        {
            curr->val=v[cnt++];
            if(cnt==v.size()) cnt=0;
            curr=curr->next;
        }
        return head;
    }
};
