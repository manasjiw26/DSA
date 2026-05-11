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
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0 || head == NULL){
            return head;
        }
        ListNode *temp = head;
        int count = 0;
        while(temp != NULL){
            count++;
            temp = temp->next;
        }
        
        k = k%count;
        if(count == k || count == 1 || k == 0){
            return head;
        }
       ListNode *last = head , *rotated = head;
       int n = k;
       while(last->next != NULL){
        if(n <= 0){
            rotated = rotated->next;
        }
        n--;
        last = last->next;
       }
       ListNode * newHead;
       if(rotated != NULL){
        newHead= rotated->next;
       last->next = head;
       rotated->next = NULL;
       }
       
       return newHead;
    }
};