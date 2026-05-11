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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *Lenght = head;
        int count = 0;
        while(Lenght != NULL){
            Lenght = Lenght->next;
            count++;
        }
        if(count == n){
            return head->next;
        }
        ListNode* lastNode = head , *deleteNode = head;
        if(head == NULL || (head->next == NULL && n>=1)){
            return NULL;
        }
        int k = n-1;
        while(lastNode != NULL){
            if(n<0){
                deleteNode = deleteNode->next;
            }
            n--;
            lastNode = lastNode->next;
        }
        if(deleteNode != NULL){
        ListNode * temp = deleteNode->next;
        deleteNode->next = temp->next;
        }
        return head;
    }
};