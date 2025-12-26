/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}*head;
*/

class Solution {
  public:
    void deleteNode(Node* del_node) {
        // code here
        Node *curr = del_node;
        Node *prev;
        if(curr->next == NULL){
            delete curr;
        }
        while(curr->next!=NULL){
            prev = curr;
            curr->data = curr->next->data;
            curr = curr->next; 
        }
        prev->next = NULL;
        delete curr;
    }
};