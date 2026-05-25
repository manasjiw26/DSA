/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */ 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res , *resptr;
        res = new ListNode(0);
        resptr = res;
        int carry = 0;
        while( l1 != NULL && l2 != NULL){
            int sum = l1->val + l2->val + carry;
            if(sum > 9){
                carry = 1;
                sum = sum - 10;
            }
            else{
                carry = 0;
            }
            l1 = l1->next;
            l2 = l2->next;
            ListNode* temp = new ListNode(sum);
            resptr->next = temp;
            resptr = resptr->next;
        }
        while( l1 != NULL){
            int sum = l1->val + carry;
            if(sum > 9){
                carry = 1;
                sum = sum - 10;
            }
            else{
                carry = 0;
            }
            l1 = l1->next;
            ListNode* temp = new ListNode(sum);
            resptr->next = temp;
            resptr = resptr->next;
        }
    
    while( l2 != NULL){
            int sum = l2->val + carry;
            if(sum > 9){
                carry = 1;
                sum = sum - 10;
            }
            else{
                carry = 0;
            }
            l2 = l2->next;
            ListNode* temp = new ListNode(sum);
            resptr->next = temp;
            resptr = resptr->next;
        }
        if(carry == 1){
            ListNode* temp = new ListNode(1);
            resptr->next = temp;
        }
        return res->next;
    }
    
};