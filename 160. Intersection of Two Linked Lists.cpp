///160. Intersection of Two Linked Lists
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) 
    {
        unordered_set<ListNode*> st;
        while(headA!=NULL)
        {
            st.insert(headA);
            headA=headA->next;
        }
        while(headB!=NULL)
        {
            if(st.find(headB)!=st.end())
                return headB;
            headB=headB->next;
        }
        return headB;
    }
};
