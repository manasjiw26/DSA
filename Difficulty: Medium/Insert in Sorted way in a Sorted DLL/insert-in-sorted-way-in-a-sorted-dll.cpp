/*structure of the node of the DLL is as
struct Node {
    int data;
    struct Node* prev, *next;
};
*/
// function should insert a new node in sorted way in
// a sorted doubly linked list
// Return the head after insertion
class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {
        // Code here
        
        Node *temp =new Node();
        temp->data = x;
        temp->prev = NULL;temp->next = NULL;
        if(head == NULL){
            return temp;
        }
        if(x<=head->data){
            temp->next = head;
            temp->prev = head->prev;
            head->prev = temp;
            return temp;
        }
        Node *curr = head,*prev=NULL;
        while(curr!=NULL && x>(curr->data)){
            prev = curr;
            curr = curr->next;
        }
        prev->next = temp;
        temp->prev = prev;
        temp->next = curr;
        if(curr!=NULL){
        curr->prev = temp;}
        return head;
    }
};