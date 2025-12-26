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
    bool areIdentical(Node *head1, Node *head2) {
        // code here
        Node *curr1=head1;
        Node *curr2=head2;
        bool flag = true;
        while(curr1!=NULL &&curr2!=NULL)
        {
            if(curr1->data != curr2->data){
                flag = false;
                break;
            }
            curr1=curr1->next;
            curr2=curr2->next;
        }
        if(flag==true){
        if(curr1==NULL && curr2==NULL){
            return true;
        }
        return false;
        }
        else{
            return false;
        }
        
        
    }
};