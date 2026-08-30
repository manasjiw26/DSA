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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL){return true;}
        return checkSymmetry(root->left,root->right);
    }
    bool checkSymmetry(TreeNode* temp1,TreeNode* temp2){
        if(temp1 == NULL && temp2 == NULL){return true;}
        if(temp1 == NULL || temp2 == NULL){return false;}
        
        if(temp1->val != temp2->val){return false;}
        else{
            return checkSymmetry(temp1->left,temp2->right)&&checkSymmetry(temp1->right,temp2->left);
        }
    }
};