//definition of signly-linked list.
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next)(NULL){}
	/* data */
};
class Solution{
public:
	ListNode *mergeTwoLists(ListNode *l1,ListNode *l2){
		if(l1==NULL) return l2;
		if(l2==NULL) return l1;
		ListNode *head=new ListNode(0);
		ListNode *tmp=head;

		while(l1||l2){
			ListNode *cur=NULL;
			if(l1==NULL){
				cur=l2;
				l2=l2->next;
			}
			else if(l2==NULL){
				cur=l1;
				l1=l1->next;
			}

			else{
				if(l1->val<l2->val){
					cur=l1;
					l1=l1->next;
			    }
				else{
					cur=l2;
					l2=l2->next;
				}

			}
			
			tmp->next=cur;
			tmp=tmp->next;
		}
		return head->next;
	}

};