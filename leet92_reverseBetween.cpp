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
    ListNode *reverseBetween(ListNode *head,int m,int n){
    	if(head==NULL||head->next==NULL) return head;

    	ListNode *p=head;
    	ListNode *q=NULL;

    	for(int i=0;i<m-1;i++){
    		q=p;
    		p=p->next;
    	}

    	ListNode *end=p;
    	ListNode *pre=p;
    	p=p->next;

    	for(int i=m+1;i<=n;i++){
    		ListNode *pNext=p->next;
            p->next=pre;
            pre=p;
            p=pNext;
    	}

    	end->next=p;

    	if(q){

    		q->next=pre;
    	}

    	else{

    		head=pre;
    	}
    	
        return head;
    }	
};