/*
class Node
{
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  
    vector<int> preOrder(Node* root) {
        vector <int> v;
        preorderTraversal(root,v);
        return v;
    }
    void preorderTraversal(Node* root,vector <int> &v){
        if(root == NULL){return;}
        v.push_back(root->data);
        preorderTraversal(root->left,v);
        preorderTraversal(root->right,v);
    }
};