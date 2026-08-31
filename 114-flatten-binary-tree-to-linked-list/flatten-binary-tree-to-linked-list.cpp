/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void flatten(TreeNode* root) {
        if(root == NULL){ return;}
        falttenTree(root);
    }
    void falttenTree(TreeNode* root){
        if(root->left != NULL){
        falttenTree(root->left);}
        if(root->right!=NULL){
            falttenTree(root->right);
        }
            if(root->left!=NULL){
                TreeNode* temp = root->left;
                while(temp->right!=NULL){
                    temp = temp->right;
                }
                temp->right = root->right;
                root->right = root->left;
                root->left = NULL;
            }
        
        return;
        
    }
};