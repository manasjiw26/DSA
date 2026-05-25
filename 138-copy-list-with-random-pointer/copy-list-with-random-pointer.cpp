/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
    if(head == NULL){
        return NULL;
    }
    Node * ptr = head;
    while(ptr!=NULL){
        Node* temp = new Node(ptr->val);
        temp->next = ptr->next;
        ptr->next = temp;
        ptr = temp->next;
    }
    Node* ptr2 = head;
    while(ptr2 != NULL){
        if(ptr2->random != NULL){
        ptr2->next->random = ptr2->random->next;
        }else{
            ptr2->next->random = NULL;
        }
        ptr2 = ptr2->next->next;
    }

    Node* newhead = head->next,*newptr = head->next;
    ptr = head;
    while(ptr != NULL && newptr != NULL && ptr->next != NULL && newptr->next != NULL){
        ptr->next = ptr->next->next;
        newptr->next = newptr->next->next;
        ptr = ptr->next;
        newptr = newptr->next;
    }
    ptr->next = NULL;
    newptr->next = NULL;
    return newhead;
    }
};