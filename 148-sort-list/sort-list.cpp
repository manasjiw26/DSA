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
    ListNode* sortList(ListNode* head) {
        return sortedList(head);
    }
    ListNode* sortedList(ListNode* head){
        if(head == NULL || head->next == NULL){return head;}
        ListNode* fast = head->next,*slow = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* mid = slow->next;
        slow->next = NULL;
        ListNode* left = sortedList(head);
        ListNode* right = sortedList(mid);
        ListNode* prev = left->val<=right->val?left:right;
        ListNode* root = prev;
        if(prev == left){
            left=left->next;
        }else{
            right = right->next;
        }
        while(left!=NULL && right!=NULL){
            if(left->val<=right->val){
                prev->next = left;
                prev = left;
                left = left->next;

            }else{
                prev->next = right;
                prev = right;
                right = right->next;
            }
        }
        if(left==NULL){
            prev->next = right;    
        }
        else{
            prev->next = left;
        }
        
        return root;
    }
};