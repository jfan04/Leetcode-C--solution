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
    ListNode* reverseList(ListNode* head) {
        
        if(head==NULL||head->next==NULL) return head;
        
        ListNode *pre=head;
        ListNode *next=head->next;
        pre->next=NULL;
        while(next){
            ListNode *nextnext=next->next;
            next->next=pre;
            pre=next;
            next=nextnext;
        }
        
        return pre;
        
    }
};