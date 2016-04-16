//definition of singly-linked list.
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
	/* data */
};
class Solution{
public:
      ListNode *swapPairs(ListNode *head){
      	if(head==NULL||head->next==NULL) return head;
      	ListNode *p1=head;
      	ListNode *pre=head;
      	ListNode *p2;

      	while(p1&&p1->next){
              p2=p1->next;
              p1->next=p2->next;
              p2->next=p1;

              if(pre==head){
              	head=p2;
              }
              else{
              	pre->next=p2;
              }

              pre=p1;
              p1=p1->next;
      	}

      	return head;   

      }	
};