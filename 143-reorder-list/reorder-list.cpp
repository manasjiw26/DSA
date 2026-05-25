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
    void reorderList(ListNode* head) {
        ListNode * slow = head, *fast = head;
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode * reverse = slow->next;
        ListNode * prev = NULL;
        while(reverse != NULL){
            ListNode* temp = reverse;
            reverse = reverse->next;
            temp->next = prev;
            prev = temp;
        }
        slow->next = prev;
        ListNode* ptr1 = head , *ptr2 = slow->next;
        slow->next = NULL;
        while(ptr1 != slow && ptr2 != NULL){
            ListNode* next1 = ptr1->next;
            ListNode* next2 = ptr2->next;
            ptr1->next = ptr2;
            ptr2->next = next1;
            ptr1 = next1;
            ptr2 = next2;
        }


    }
};