#include"head.h"

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
	  ListNode* swapPairs(ListNode* head) {
		 if(head==nullptr||head->next==nullptr)
			return head;
		 ListNode *first=head;
		 ListNode *second=head->next;
		 first->next=swapPairs(second->next);
		 second->next=first;
		 return second;
	  }
};
