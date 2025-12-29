/*
class Node {
public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* joinTheLists(Node* head1, Node* head2) {
        // code here
        Node *curr = head1;
        if(head1 == NULL){
            return head2;
        }
        while(curr->next != NULL){
            curr = curr->next;
        }
        curr ->next = head2;
        return head1;
    }
};