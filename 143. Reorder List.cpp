///143. Reorder List
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
    void reorderList(ListNode* head) 
    {
        vector<int> v;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        curr=head;
        int l=0,r=v.size()-1;
        while(curr!=nullptr)
        {
            curr->val=v[l++];
            curr=curr->next;
            if(curr!=nullptr)
            {
                curr->val=v[r--];
                curr=curr->next;
            }
        }
        return;
    }
};
