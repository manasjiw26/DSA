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
    int cNodes(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        TreeNode* left = root,*right = root;
        int leftHeight = 1,rightHeight = 1;
        while(left->left!=NULL){
            leftHeight++;
            left = left->left;
        }
        while(right->right!=NULL){
            rightHeight++;
            right = right->right;
        }
        if(leftHeight == rightHeight){
            return pow(2,rightHeight) - 1; 
        }
        else{
            return cNodes(root->left)+cNodes(root->right)+1;

        }
    }
    int countNodes(TreeNode* root) {
        return cNodes(root);
        
    }
};