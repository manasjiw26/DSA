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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int order = inorder.size()-1;
        return recursiveTreeBuilder(inorder,postorder,0,inorder.size()-1,order);
    }
    TreeNode* recursiveTreeBuilder(vector<int>& inorder, vector<int>& postorder,int low,int high,int &order){
        if(low>high){return NULL;}
        if(order<0){return NULL;}
        TreeNode* root = new TreeNode(postorder[order]);
        int k = 0;
        while(k<inorder.size()){
            if( inorder[k] == postorder[order]){
                break;
            }
            k++;
        }
        order--;
        root->right = recursiveTreeBuilder(inorder,postorder,k+1,high,order);
        root->left = recursiveTreeBuilder(inorder,postorder,low,k-1,order);
        
    return root;
    }
};