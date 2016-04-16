/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *splitList(ListNode *head){
        ListNode *fast=head;
        ListNode *slow=head;
        
        while(fast->next){
            fast=fast->next;
            if(fast->next){
                fast=fast->next;
            }
            
            else{
                break;
            }
            
            slow=slow->next;
        }
        
        return slow;
    }
    
    ListNode *mergeList(ListNode *list1,ListNode *list2){
        ListNode *newHead=new ListNode(0);
        ListNode *head=newHead;
        
        while(list1&&list2){
            if(list1->val<list2->val){
                newHead->next=list1;
                list1=list1->next;
            }
            else{
                newHead->next=list2;
                list2=list2->next;
            }
            newHead=newHead->next;
        }
        if(list1){
            newHead->next=list1;
        }
        if(list2){
            newHead->next=list2;
        }
        
        return head->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode *mid=splitList(head);
        ListNode *head2=mid->next;
        mid->next=NULL;
        return mergeList(sortList(head),sortList(head2));
    }
};