///142. Linked List Cycle II
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
    ListNode *detectCycle(ListNode *head)
    {
        unordered_set<ListNode*> st;
        while(head!=nullptr)
        {
            if(st.find(head)!=st.end())
                return head;
            st.insert(head);
            head=head->next;
        }
        return nullptr;
    }
};
