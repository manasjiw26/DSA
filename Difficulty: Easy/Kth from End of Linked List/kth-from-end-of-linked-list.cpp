/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

class Solution {
  public:
    int getKthFromLast(Node* head, int k) {
        // code here
        Node *first=head,*second=head;
        for(int i=0;i<k && first!=NULL;i++){
            first = first->next;
        if(first==NULL && i<k-1){
            return -1;
        }
            
        }
        
        while(first!=NULL){
            first = first->next;
            second = second->next;
        }
        return second->data;
    }
};