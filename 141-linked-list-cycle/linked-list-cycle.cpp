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
    bool hasCycle(ListNode *head) {
        ListNode* one = head,*two = head;
        if(head == NULL ||  head->next == NULL || head->next->next == NULL)
        return false;
        while(two != NULL && two->next != NULL && two->next->next != NULL ){
            one = one->next;
            two = two->next->next;
            if(one == two){
                return true;
            }
        }
        return false;
    }
};