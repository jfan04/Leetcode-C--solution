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
   ListNode *detectCycle(ListNode *head){
   	 if(head==NULL||head->next==NULL) return NULL;
     ListNode *slow,*fast;
     slow=fast=head;
     while(fast&&fast->next){
     	slow=slow->next;
     	fast=fast->next->next;
     	if(slow==fast) break;
     }

     if(fast==NULL||fast->next==NULL) return NULL;
     
     slow=head;
     while(slow!=fast){
     	slow=slow->next;
     	fast=fast->next;
     }

     return slow;
   }	
};