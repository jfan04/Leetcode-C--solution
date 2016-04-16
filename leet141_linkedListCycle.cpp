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
   bool hasCycle(ListNode *head){
   	   if(head==NULL||head->next==NULL) return false;
   	   ListNode *slow,*fast;
   	   slow=fast=head;

   	   while(fast&&fast->next){
   	   	 slow=slow->next;
   	   	 fast=fast->next->next;
   	   	 if(slow==fast) return true;
   	   }

   	   return false;
   	// Solution 2:
   	 /* if(head==NULL||head->next==NULL) return false;
   	   ListNode *slow=head;
   	   ListNode *fast=head->next;
   	   
   	   while(true){
   	       if(fast){
   	           fast=fast->next;
   	           if(fast==slow) return true;
   	       }
   	       
   	       if(fast){
   	           fast=fast->next;
   	           if(fast==slow) return true;
   	       }
   	       
   	       else return false;
   	       
   	       
   	       slow=slow->next;
   	   } */  
   }	
};