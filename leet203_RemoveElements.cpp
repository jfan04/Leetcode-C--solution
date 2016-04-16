//Definition for a singly Linked List.
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
	/* data */
};
class Solution{
public:	
    ListNode *removeElements(ListNode *head, int val){
    	/* solution 1:
    	 if(head==NULL) return NULL;
        ListNode *cur=head;
        ListNode *next=head->next;
        
        while(next){
            if(next->val==val){
                cur->next=next->next;
                //delete next;
                next=cur->next;
            }
            else{
                cur=next;
                next=next->next;
            }
        }
        
        if(head->val==val){
           // cur=head;
            head=head->next;
            //delete cur;
        }
        
        return head;*/
        // Solution 2:
        if(head==NULL) return NULL;
        ListNode *myHead=new ListNode(0);
        myHead->next=head;
        ListNode *p=myHead;
        ListNode *q=NULL;
        
        while(p->next){
            if(p->next->val==val){
                q=p->next;
                p->next=q->next;
                delete q;
            }
            else{
                p=p->next;
            }
        }
        
        return myHead->next;
    }
};