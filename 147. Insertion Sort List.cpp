///147. Insertion Sort List
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
    ListNode* insertionSortList(ListNode* head) 
    {
        vector<int> v;
        ListNode* curr=head;
        while(curr!=nullptr)
        {
            v.push_back(curr->val);
            curr=curr->next;
        }
        sort(v.begin(),v.end());
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
