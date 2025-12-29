// typedef struct Node {
//     int data;
//      Node* next;
//      Node* prev;
// };

int isCircular(Node* head) {
    // code here
    if(head==NULL){
        return 0;
    }
    if(head->next == NULL){
        return 0;
    }
    if(head->next == head){
        return 1;
    }
    Node *temp = new Node;
    Node *curr = head,*next = NULL;
    while(curr!=NULL){
        if(curr->next == temp){
            return 1; 
        }
        else{
            next = curr->next;
            curr->next = temp;
        }
        curr = next;
    }
    return 0;
}
