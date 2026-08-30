/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue <Node*> s;
        if(root == NULL){return NULL;}
        s.push(root);
        s.push(NULL);
        while(s.size()>0 ){
        Node* curr = s.front();
            s.pop();
            if(curr!=NULL){
            curr->next = s.front();
            if(curr->left!=NULL){
                s.push(curr->left);
            }
            if(curr->right!=NULL){
                s.push(curr->right);
            }
            }else{
                if(s.size()==0){break;}s.push(NULL);}
        }
        return root;
    }
};