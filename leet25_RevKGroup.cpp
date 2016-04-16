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
     ListNode *reverseKGroup(ListNode *head,int k){
     	if(head==NULL||head->next==NULL||k<=1) return head;

     	int n=k;
     	ListNode *q=head;
     	int len=0;
     	while(q){
     		len++;
     		q=q->next;
     	}

     	if(n>len) return head;

     	ListNode *p=head;
     	ListNode *myHead=NULL;

     	while(n){
     		ListNode *pnext=p->next;
     		p->next=myHead;
     		myHead=p;
     		p=pnext;
     		n--;
     	}

     	if(len-k>=k){
            head->next=reverseKGroup(p,k);
     	}
     	else{
     		head->next=p;
     	}
     	
        return myHead;
     }	
};