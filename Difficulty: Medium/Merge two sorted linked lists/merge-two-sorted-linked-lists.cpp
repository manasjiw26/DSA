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
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        Node* curr1 = head1,*curr2 = head2;
        if(head1 == NULL){
            return head2;
        }
        if(head2 == NULL){
            return head1;
        }
        Node *headnew = NULL,*curr=NULL;
        int i=0;
        while(curr1!=NULL && curr2!=NULL){
            if(curr1->data <= curr2->data){
                if(i==0){
                    headnew = head1;
                    curr = head1;
                    i++;
                }
                else{
                    curr->next = curr1;
                    curr = curr->next;
                }
                curr1 = curr1->next;
                
            }
            else{
                if(i==0){
                    headnew = head2;
                    curr = head2;
                    i++;
                }
                else{
                    curr->next = curr2;
                    curr = curr->next;
                }
                curr2 = curr2->next;
            }
        }
        if(curr1 == NULL){
            curr->next = curr2;
        }
        if(curr2 == NULL){
            curr->next = curr1;
        }
        return headnew;
    }
};