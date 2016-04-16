//Definition for a singly-linked list.
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
	/* data */
};

class Solution{
public:
   ListNode *reverse(ListNode *head){
   	 if(head==NULL||head->next==NULL) return head;
   	 ListNode *cur=head;
   	 ListNode *pNext=head->next;
   	 cur->next=NULL;
   	 while(pNext){
   	 	ListNode *tmp=pNext->next;
        pNext->next=cur;
        cur=pNext;
        pNext=tmp;
   	 }
   	 return cur;
   }
   void reorderList(ListNode *head){
      if(head==NULL||head->next==NULL) return;
      ListNode *slow,*fast;
      slow=fast=head;
      while(fast){
      	fast=fast->next;
      	if(fast){
      	    fast=fast->next;
      	}
      	if(fast==NULL) break;
      	slow=slow->next;
      }

      ListNode *head2=slow->next;
      slow->next=NULL;
      head2=reverse(head2);
      
      ListNode *p1=head;
      ListNode *p2=head2;
      ListNode *tmp;

      while(p1&&p2){
      	tmp=p1->next;
      	p1->next=p2;
      	p1=tmp;
      	tmp=p2->next;
      	p2->next=p1;
      	p2=tmp;
      }

   }	
};