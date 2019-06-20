///328. Odd Even Linked List
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
    ListNode* oddEvenList(ListNode* head)
    {
        ListNode* oddStart=NULL;
        ListNode* evenStart=NULL;
        ListNode* odd=oddStart;
        ListNode* even=evenStart;
        ListNode* curr=head;
        int cnt=1;
        while(curr!=NULL)
        {
            if(cnt%2)
            {
                if(odd==NULL)
                {
                    oddStart=new ListNode(curr->val);
                    odd=oddStart;
                }      
                else
                {
                    cout<<"ww";
                    odd->next=new ListNode(curr->val);
                    odd=odd->next;
                }
            }
            else
            {
                if(even==NULL)
                {
                    evenStart=new ListNode(curr->val);
                    even=evenStart;
                }    
                else
                {
                    even->next=new ListNode(curr->val);
                    even=even->next;
                }
            }
            cnt++;
            curr=curr->next;
        }
        curr=head;
        while(oddStart!=NULL)
        {
            curr->val=oddStart->val;
            curr=curr->next;
            oddStart=oddStart->next;
        }
        while(evenStart!=NULL)
        {
            curr->val=evenStart->val;
            curr=curr->next;
            evenStart=evenStart->next;
        }
        return head;
    }
};
