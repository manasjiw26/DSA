/*
class Node {
  public:
    int data;
    Node* next;
    Node* random;

    Node(int x) {
        data = x;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
  public:
    Node* cloneLinkedList(Node* head) {
        // code here
        Node *curr = head;
        
        while(curr != NULL){
            Node *temp = new Node(curr->data);
            Node *next = curr->next;
            temp->next = curr->next;
            curr->next = temp;
            curr = next;
        }
        for(Node * curr = head;curr!=NULL;curr = curr->next->next){
            curr->next->random = (curr->random == NULL)? NULL: curr->random->next;
        }
        Node *h2 = head->next;
        Node *clone = h2;
        for(Node * curr = head;curr!=NULL;curr = curr->next){
            curr->next = curr->next->next;
            clone->next = (clone->next == NULL )? NULL:clone->next->next;
            clone = clone->next;
        }
        return h2;
        
    }
};