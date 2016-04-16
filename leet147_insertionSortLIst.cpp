//Defintion for singly-linked list.
struct ListNode
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
	/* data */
};

class Solution{
public:
   ListNode *insertionSortList(ListNode *head){
   	 if(head==NULL||head->next==NULL) return head;
   	 ListNode *cur=head;
       ListNode *helper=new ListNode(0);

   	 while(cur){
         ListNode *tmp=cur->next;
         ListNode *pre=helper;

         while(pre->next&&pre->next->val<cur->val){
            pre=pre->next;
         }

         cur->next=pre->next;
         pre->next=cur;
         cur=tmp;
   	 	
   	 }

       return helper->next;
   }	
};

/*
//============================================================================
// Name        : sort_list.cpp
// Author      : menglei
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include "stdafx.h"
#include <iostream>
using namespace std;


struct ListNode {
   int val;
   ListNode *next;
   ListNode(int x) : val(x), next(NULL) {}
};


void show(ListNode * h){
   while (h != NULL){
      cout << h->val << "->";
      h = h->next;
   }
   cout << endl;
}
//======================================================

ListNode *insertionSortList(ListNode *head) {
   ListNode dummy(-1);//哨位
   dummy.next = head;
   if (dummy.next == NULL || dummy.next->next == NULL){
      return dummy.next;
   }

   ListNode* pre = dummy.next;
   ListNode * cur = pre->next;
   
   while (cur){
      
      if (pre->val <= cur->val){
         cur = cur->next;
         pre = pre->next;
      }
      else
      {
         ListNode *preinsert = &dummy;
         ListNode *insert = preinsert->next;
         while (insert->val < cur->val)
         {
            insert = insert->next;
            preinsert = preinsert->next;
            
         }
         //insert
         pre->next = cur->next;
         cur->next = insert;
         preinsert->next = cur;
         cur = pre->next;

      }
   }

   return dummy.next;
}


//==========================================================


int main() {
   ListNode *head;
   ListNode a(1);
   ListNode b(3);
   ListNode c(5);
   ListNode d(4);
   ListNode e(3);
   ListNode f(6);

   head = &a;
   a.next = &b;
   b.next = &c;
   c.next = &d;
   d.next = &e;
   e.next = &f;
   
   show(head);

   ListNode *t;
   t = insertionSortList(head);

   show(t);
   return 0;
}*/