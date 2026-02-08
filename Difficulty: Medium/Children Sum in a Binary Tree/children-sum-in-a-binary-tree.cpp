/*

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

*/

class Solution {
  public:
    bool isSumProperty(Node *root) {
        // code here
        queue <Node*> q;
        q.push(root);
        while(q.empty() == false){
            Node *curr = q.front();
            q.pop();
            if(curr->left == NULL && curr->right == NULL){
                continue;
            }
            else{
                int sum = curr->data;
                int left,right;
                if(curr->left == NULL){left = 0;}
                else{left = curr->left->data;}
                
                if(curr->right == NULL){right = 0;}
                else{right = curr->right->data;}
                
                if(left+right == sum){
                    if(curr->left != NULL){q.push(curr->left);}
                    if(curr->right != NULL){q.push(curr->right);}
                }
                else{return false;}
            }
        }
        return true;
    }
};