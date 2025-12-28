/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {

        // code here
        if(head==NULL || head->next == NULL){
            return head;
        }
        Node *curr = head,*next = head->next;
        while(curr->next!=NULL){
        if(curr->data == next->data){
            curr->next = next->next;
            delete next;
            next = curr->next;
        }
        else{
            curr = curr->next;
            next = curr->next;
        }
        }
        return head;
    }
};