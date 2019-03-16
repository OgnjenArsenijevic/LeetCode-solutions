///23. Merge k Sorted Lists
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
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
        priority_queue<int, vector<int>, greater<int> > pq;
        for(int i=0;i<lists.size();i++)
        {
            while(lists[i])
            {
                pq.push(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        if(pq.empty()) return nullptr;
        ListNode* l=new ListNode(pq.top());
        ListNode* head=l;
        pq.pop();
        while(!pq.empty())
        {
            l->next=new ListNode(pq.top());
            pq.pop();
            l=l->next;
        }
        return head;
        
    }
};
