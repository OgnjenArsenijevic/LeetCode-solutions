///138. Copy List with Random Pointer
///Author: Ognjen Arsenijevic
///username: ognjen1998
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/
class Solution
{
public:
    Node* copyRandomList(Node* head) 
    {
        if(head==NULL)
            return NULL;
        Node* curr=head;
        while(curr!=NULL)
        {
            Node* newNode=new Node(curr->val);
            newNode->next=curr->next;
            curr->next=newNode;
            curr=curr->next->next;
        }
        curr=head;
        while(curr!=NULL)
        {
            curr->next->random=(curr->random!=NULL ? curr->random->next : NULL);
            curr=curr->next->next;
        }
        curr=head;
        Node* deepHead=head->next;
        while(curr!=NULL)
        {
            Node* tmp=curr->next;
            curr->next=tmp->next;
            tmp->next=(curr->next!=NULL ? curr->next->next : NULL);
            curr=curr->next;
        }
        return deepHead;
    }
};
