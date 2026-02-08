/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    bool isBalanced(Node* root) {
        // code here
        if(isBalancedint(root)>=0){
            return true;
        }
        else{
            return false;
        }
    }
    int isBalancedint(Node* root){
        
        if(root == NULL){return 0;}
        int lh = isBalancedint(root->left);
        if(lh < 0){return -1;}
        int rh = isBalancedint(root->right);
        if(rh < 0){return -1;}
        if(abs(rh-lh) > 1){
            return -1;
        }
        else
        {
            return max(lh,rh)+1;
        }
    }
};