/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        if(head->next == NULL || head->next->next==NULL){
            return;
        }
        Node *fast = head->next->next,*slow = head->next,*prev = slow->next;
        while(slow!=fast && fast!=NULL && fast->next!=NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast == NULL){
            return;
        }
        if(slow == fast){
            slow = head;
            while(slow!=fast){
                prev = fast;
                slow=slow->next;
                fast=fast->next;
            }
            if(prev!=NULL){
            prev->next = NULL;}
        }
        
    }
};