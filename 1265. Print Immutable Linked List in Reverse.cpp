///1265. Print Immutable Linked List in Reverse
///Author: Ognjen Arsenijevic
///username: ognjen1998
/**
 * // This is the ImmutableListNode's API interface.
 * // You should not implement it, or speculate about its implementation.
 * class ImmutableListNode {
 * public:
 *    void printValue(); // print the value of the node.
 *    ImmutableListNode* getNext(); // return the next node.
 * };
 */

class Solution 
{
public:
    void printLinkedListInReverse(ImmutableListNode* head) 
    {
        stack<ImmutableListNode*> st;
        ImmutableListNode* curr=head;
        while(curr!=NULL)
        {
            st.push(curr);
            curr=curr->getNext();
        }
        while(!st.empty())
        {
            st.top()->printValue();
            st.pop();
        }
    }
};
