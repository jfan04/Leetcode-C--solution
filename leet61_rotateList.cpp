//Definition for singly-linked list.
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
	/* data */
};
class Solution{
  ListNode *rotateRight(ListNode *head,int k){
     if(head==NULL) return head;
        int len=0;
        ListNode *tmp=head;
        while(tmp!=NULL){
            len++;
            tmp=tmp->next;
        }
        
        k%=len;
        if(k==0) return head;
        
        ListNode *slow=head;
        ListNode *fast=head;
        
        while(k){
            fast=fast->next;
            k--;
        }
        
        while(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        
        ListNode *oldSlow=slow;
        ListNode *newHead=slow;
        
        while(slow->next!=NULL)slow=slow->next;
        slow->next=head;
        
        while(slow->next!=oldSlow) slow=slow->next;
        slow->next=NULL;
        
        return newHead;
  }	
};