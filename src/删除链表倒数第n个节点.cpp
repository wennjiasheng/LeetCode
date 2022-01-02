#include<iostream>

  //Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
    ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == nullptr){
            return head;
        }
        ListNode* h = new ListNode(0,head);
        ListNode* left = head;
        ListNode* right = h;
        while(n--){
            left = left->next;
        }
        while(left){
            left = left->next;
            right = right->next;
        }
        right->next = right->next->next;
         ListNode* ans = h->next;
         delete h;
        return ans; 
    }
};