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
    int kthSmallest(TreeNode* root, int k) {
        int order = k;
        int res = -1;
        inorder(root,order,res);
        return res;
    }
    void inorder(TreeNode* root, int &order,int &res){
        if(root == NULL){
            return;
        }
        if(root->left){inorder(root->left,order,res);}
        order--;
        if(order == 0){
            res = root->val;
        }
        
        if(root->right){inorder(root->right,order,res);}
    }
};