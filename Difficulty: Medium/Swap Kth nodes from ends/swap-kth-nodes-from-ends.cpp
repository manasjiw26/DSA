/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* swapKth(Node* head, int k) {
        // code here
        if(k==0){
            return head;
        }
        int count=1;
        Node *first = head,*second = head,*third = head;
        for(int i=1;i<k && first!=NULL;i++){
            first = first->next;
            count++;
        }
        if(first == NULL ||k>count){
            return head;
        }
        second = first;//this will store first k th from start;
            first = first->next;
            count++;
        while(first!=NULL){
            third = third->next;
            first = first->next;
            count++;
        }
        if(k>count){return head;}
        int t = second->data;
        second->data = third->data;
        third->data = t;
        return head;
    }
};