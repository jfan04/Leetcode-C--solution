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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL||headB==NULL) return NULL;
        
        int lenA=1;
        ListNode *cur1=headA;
        while(cur1->next){
            cur1=cur1->next;
            lenA++;
        }
        
        int lenB=1;
        ListNode *cur2=headB;
        while(cur2->next){
            cur2=cur2->next;
            lenB++;
        }
        
        if(cur1!=cur2) return NULL;
        
        int diff=lenA-lenB;
         while(diff>0){
            headA=headA->next;
            diff--;
        }
        
        while(diff<0){
            headB=headB->next;
            diff++;
        }
        
        while(headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        
        return headA;
        
    }
};