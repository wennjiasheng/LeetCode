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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * l = nullptr;
        ListNode *  head = nullptr;
        int flag = 0;
        while(l1 || l2){
            int n1 = l1?l1->val:0;
            int n2 = l2?l2->val:0;
            if(head == nullptr){
                head = l = new ListNode((n1+n2)%10);
            }else{
                l->next = new ListNode((n1+n2+flag)%10);
                l = l->next;
            }
            flag = (n1+n2+flag)/10;
            if(l1){
               l1 =  l1->next;
            }
            if(l2){
               l2 =  l2->next;
            }
            
        }
        if (flag > 0) {
            l->next = new ListNode(flag);
        }
        return head;

    }
};