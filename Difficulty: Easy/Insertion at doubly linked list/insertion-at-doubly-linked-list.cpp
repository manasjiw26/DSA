/*
class Node {
  public:
    int data;
    Node* next;
    Node* prev;

    Node(int x) {
        data = x;
        next = prev = nullptr;
    }
};
*/

class Solution {
  public:
    Node *insertAtPos(Node *head, int p, int x) {
        // code here
        Node *curr = head;
        Node *temp = new Node(x);
        if(p==0){
            temp->next = curr->next;
            temp->prev = curr;
            if(curr->next!=NULL){
        curr->next->prev = temp;}
        
            curr->next = temp;
            return curr;
        }
        for(int i=0;i<p;i++){
            curr = curr->next;
        }
        temp->next = curr->next;
        temp->prev = curr;
        if(curr->next!=NULL){
        curr->next->prev = temp;}
        curr->next = temp;
        return head;
    }
};