///1171. Remove Zero Sum Consecutive Nodes from Linked List
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
    ListNode* removeZeroSumSublists(ListNode* head) 
    {
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* end=nullptr;
        int sum;
        bool flag;
        while(curr!=nullptr)
        {
            flag=false;
            sum=0;
            end=curr;
            while(end!=nullptr)
            {
                sum+=end->val;
                if(sum==0)
                {
                    curr=end;
                    flag=true;
                    break;
                }
                end=end->next;
            }
            if(flag)
            {
                if(prev==nullptr)
                    curr=end->next;
                else
                {
                    prev->next=end->next;
                    curr=end->next;
                }
            }
            else
            {
                prev=curr;
                curr=curr->next;
            }    
        }
        return head;
    }
};
