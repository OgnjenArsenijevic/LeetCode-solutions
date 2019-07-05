///445. Add Two Numbers II
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
        ListNode* curr;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        curr=l1;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        l1=prev;
        curr=l2;
        prev=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        l2=prev;
        ListNode* list=NULL;
        int carry=0;
        while(l1!=NULL && l2!=NULL)
        {
            if(list==NULL)
            {
                list=new ListNode((l1->val+l2->val+carry)%10);
                curr=list;
            }    
            else
            {
                curr->next=new ListNode((l1->val+l2->val+carry)%10);
                curr=curr->next;
            }
            carry=(l1->val+l2->val+carry)/10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            if(list==NULL)
            {
                list=new ListNode((l1->val+carry)%10); 
                curr=list;
            }
            else
            {
                curr->next=new ListNode((l1->val+carry)%10);
                curr=curr->next;
            }
            carry=(l1->val+carry)/10;
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            if(list==NULL)
            {
                list=new ListNode((l2->val+carry)%10);
                curr=list;
            }    
            else
            {
                curr->next=new ListNode((l2->val+carry)%10);
                curr=curr->next;
            }
            carry=(l2->val+carry)/10;
            l2=l2->next;
        }
        if(carry>0)
            curr->next=new ListNode(carry);
        curr=list;
        prev=NULL;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        list=prev;
        return list;
    }
};
