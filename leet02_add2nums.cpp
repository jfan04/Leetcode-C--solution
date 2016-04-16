//definition for singly-linked list

struct ListNoe{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
};

class leetcode2_add2nums
{
public:
	ListNode *addTwoNumbers(ListNode *l1,ListNode *l2){
		ListNode* ret=new ListNode(0);
		ListNode* tmp=ret;
		int sum;
		int carry=0;

		while(l1||l2){
			int val1=0;
			if(l1){
				val1=l1->val;
				l1=l1->next;
			}
			int val2=0;
			if(l2){
				val2=l2->val;
				l2=l2->next;
			}
			sum=val1+val2+carry;
			tmp->next=new ListNode(sum%10);
			carry=sum/10;
			tmp=tmp->next;
		}

		if(carry==1){
			tmp->next=new ListNode(1);
		}

		return ret->next;
}
	
};

