//Definition for singly-linked list with a random pointer.
struct RandomListNode{
   int label;
   RandomListNode *next,*random;
   RandomListNode(int x):label(x),next(NULL),random(NULL){}
};

class Solution{
public:
    RandomListNode *copyRandomList(RandomListNode *head){
    	if(head==NULL) return NULL;
         
        RandomListNode *p1=head,*p2=head->next;

        while(p1!=NULL){
        	p1->next=new RandomListNode(p1->label);
            p1->next->next=p2;
            p1=p2;
            if(p2!=NULL){
            	p2=p2->next;
            }
        }
        
        p1=head;
        p2=head->next;
        while(p1!=NULL){
        	if(p1->random==NULL){
        		p2->random=NULL;
        	}
        	else{
        		p2->random=p1->random->next;
        	}
        	p1=p1->next->next;
        	if(p2->next!=NULL){
        		p2=p2->next->next;
        	}
        }

        RandomListNode *ret=head->next;
        p1=head; p2=head->next;

        while(p2->next!=NULL){
        	p1->next=p2->next;
        	p1=p2;
        	if(p2->next!=NULL){
        		p2=p2->next;
        	}
        }
        p1->next=NULL;
        p2->next=NULL;
        return ret;
    }	
};