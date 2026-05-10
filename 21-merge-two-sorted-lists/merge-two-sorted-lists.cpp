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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head;
        ListNode *ptr1 = list1;
        ListNode *ptr2 = list2;
        if(ptr1 == NULL){
            return ptr2;
        }
        if(ptr2 == NULL){
            return ptr1;
        }
        if(ptr1->val <= ptr2->val){
            head = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            head = ptr2;
            ptr2 = ptr2->next;
        }
        ListNode *temp = head;
        while(ptr1 != NULL && ptr2 != NULL){
           if(ptr1->val <= ptr2->val){
            temp->next = ptr1;
            temp = temp->next;
            ptr1 = ptr1->next;
            }
            else{
            temp->next = ptr2;
            temp = temp->next;
            ptr2 = ptr2->next;
            }
        }

        while(ptr1 != NULL){
            temp->next = ptr1;
            temp = temp->next;
            ptr1 = ptr1->next;
        }
        while(ptr2 != NULL){
            temp->next = ptr2;
            temp = temp->next;
            ptr2 = ptr2->next;
        }
        return head;
    }
};