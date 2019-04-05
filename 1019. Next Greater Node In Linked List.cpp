///1019. Next Greater Node In Linked List
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
    stack<int> st;
    unordered_map<int,int> ump;
    vector<int> nextLargerNodes(ListNode* head) 
    {
        vector<int> ans;
        if(head==nullptr) return ans;
        vector<int> v;
        while(head!=nullptr)
        {
            v.push_back(head->val);
            head=head->next;
        }
        for(int i=0;i<v.size();i++)
        {
            int num=0;
            for(int j=i+1;j<v.size();j++)
            {
                if(v[j]>v[i])
                {
                    num=v[j];
                    break;
                }
            }
            ans.push_back(num);
        }
        return ans;
    }
};
