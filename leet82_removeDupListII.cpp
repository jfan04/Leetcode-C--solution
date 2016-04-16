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
    ListNode *deleteDuplicates(ListNode *head){
    	if(head==NULL||head->next==NULL) return head;

    	ListNode *p=head;

    	while(p->next!=NULL&&p->val==p->next->val){
    		p=p->next;
    	}

    	if(p!=head){
    		while(p!=head){
    			ListNode *tmp=head;
    			head=head->next;
    			free(tmp);
    		}

    		return deleteDuplicates(head->next);
    	}

    	head->next=deleteDuplicates(head->next);
    	return head;

    }	
};