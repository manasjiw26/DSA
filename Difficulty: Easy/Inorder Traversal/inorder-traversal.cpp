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
    vector<int> inOrder(Node* root) {
        // code here
        vector<int> v;
        inOrderTraversal(root,v);
        return v;
    }
    void inOrderTraversal(Node* root,vector<int> &v) {
        // code here
        if(root == NULL){return;}
        inOrderTraversal(root->left,v);
        v.push_back(root->data);
        inOrderTraversal(root->right,v);
    }
};