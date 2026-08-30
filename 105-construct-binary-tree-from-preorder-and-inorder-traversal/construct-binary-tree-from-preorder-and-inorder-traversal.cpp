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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int x = 0;
    return createSubtree(preorder,inorder,0,inorder.size()-1,x);
    }
    TreeNode * createSubtree(vector<int>& preorder, vector<int>& inorder,int low,int high,int &preIndex){
        if(low>high){return NULL;}
        TreeNode* root = new TreeNode(preorder[preIndex]);
        
        int k=-1;
        for(int i = 0;i<inorder.size();i++){
            if(preorder[preIndex] == inorder[i]){
                k = i;
            }
        }
        preIndex++;
        root->left = createSubtree(preorder,inorder,low,k-1,preIndex);
        root->right = createSubtree(preorder,inorder,k+1,high,preIndex);
        return root;
    }
};