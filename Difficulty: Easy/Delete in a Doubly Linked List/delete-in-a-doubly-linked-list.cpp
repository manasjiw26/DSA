/* Structure of Node
class Node {
  public:
    int data;
    Node *next;
    Node *prev;

    Node(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/

class Solution {
  public:
    Node* delPos(Node* head, int x) {
        // code here
        Node *curr = head;
        if(x==1){
            curr->next->prev = NULL;
            Node *temp = curr->next;
            delete curr;
            return temp;
        }
        int i = 1;
        Node *prev;
        while(i != x && curr!=NULL){
            prev = curr;
            curr = curr->next;
            i++;
        }
        prev->next = curr->next;
        if(curr->next!=NULL){
            curr->next->prev = prev;
        }
        delete curr;
        return head;
    }
};