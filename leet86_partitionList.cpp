//Definition for singly-link list.
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
	/* data */
};
class Solution{
public:
    ListNode *partition(ListNode *head,int x){

    	ListNode *cur=head;
    	ListNode *sm=new ListNode(0),*sm_tail=sm;
    	ListNode *bg=new ListNode(0),*bg_tail=bg;

    	while(cur!=NULL){
    		if(cur->val<x){
    			sm_tail->next=cur;
    			cur=cur->next;
    			sm_tail=sm_tail->next;
    			sm_tail->next=NULL;
    		}
    		else{
    			bg_tail->next=cur;
    			cur=cur->next;
    			bg_tail=bg_tail->next;
    			bg_tail->next=NULL;
    		}
    	}

    	sm_tail->next=bg->next;
    	return sm->next;
    }	
};
