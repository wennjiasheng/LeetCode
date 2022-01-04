#include<iostream>
#include<vector>


using namespace std;


 //Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        int n = 0;
        vector<int> result;
        ListNode* first = head;
        while(first){
            n++;
            first = first->next;
        }
        result.resize(n);
        first = head;
        while(first){
            result[--n] = first->val;
            first = first->next;
        }
        return result;
    }
};