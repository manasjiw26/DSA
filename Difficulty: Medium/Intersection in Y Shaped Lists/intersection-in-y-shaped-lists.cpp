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
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        int c1 = 0,c2 = 0;
        Node *curr1 = head1,*curr2 = head2;
        while(curr1!=NULL){
            curr1 = curr1->next;
            c1++;
        }
        while(curr2!=NULL){
            curr2 = curr2->next;
            c2++;
        }
        curr1 = head1,curr2 = head2;
        if(c1>c2){
            for(int i = 1;i<=c1-c2;i++){
                curr1 = curr1->next;
            }
        }
        if(c2>c1){
            for(int i = 1;i<=c2-c1;i++){
                curr2 = curr2->next;
            }
        }
        while(curr1!=NULL && curr2!=NULL){
            if(curr1 == curr2){
                return curr1;
            }
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        return NULL;
    }
};