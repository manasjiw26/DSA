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
    Node* addTwoLists(Node* head1, Node* head2) {
        // code here
        
        Node *newhead1 = head1,*newhead2 = head2;
        
        if(newhead1 == NULL){
            return newhead2;
        }
        if(newhead2 == NULL){
            return newhead1;
        }
        
        while(newhead1!=NULL && newhead1->data == 0 ){
            newhead1 = newhead1->next;
        }
        while(newhead2!=NULL && newhead2->data == 0){
            newhead2 = newhead2->next;
        }
        
        int c1 = 0,c2 = 0;
        Node * a = newhead1;
        Node * b = newhead2;
        while(a!=NULL){
            a = a->next;
            c1++;
        }
        while(b!=NULL){
            b = b->next;
            c2++;
        }
        
        
        Node * rev1;
        Node * rev2;
        if(c1>=c2){
        rev1 = reverseStr(newhead1);
        rev2 = reverseStr(newhead2);
        }
        else{
        rev1 = reverseStr(newhead2);
        rev2 = reverseStr(newhead1);
        }
        
        Node * res = new Node(0);
        Node *ptr = res;
        int num,carry = 0;
        while(rev1!=NULL && rev2 != NULL){
            int a = rev1->data+rev2->data+carry;
            num = a%10;
            carry = a/10;
            ptr->next = new Node(num);
            ptr = ptr->next;
            rev1 = rev1->next;
            rev2 = rev2->next;
        }
        while(rev1!=NULL){
        int a = rev1->data+carry;
            num = a%10;
            carry = a/10;
            ptr->next = new Node(num);
            ptr = ptr->next;
            rev1 = rev1->next;
   
        }
        if(carry!=0){
            ptr->next = new Node(carry);
        }
        return reverseStr(res->next);
        
        
    }
    Node *reverseStr(Node *head){
        Node *curr = head;
        Node * next,* prev = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
        
    }
};