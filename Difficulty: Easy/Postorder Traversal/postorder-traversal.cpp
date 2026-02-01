/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> postOrder(Node* root) {
        // code here
        vector<int> v;    
        postOrderTraversal(root,v);
        return v;
    }
    void postOrderTraversal(Node* root,vector<int> &v){
        if(root == NULL){return;}
        postOrderTraversal(root->left,v);
        postOrderTraversal(root->right,v);
        v.push_back(root->data);
    }
};