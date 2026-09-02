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
    int maxPathSum(TreeNode* root) {
        int maximum = -100000;
        int val = maxSum(root,&maximum);
        maximum = maximumValue(maximum,val);
        return maximum;
    }
    int maximumValue(int a,int b){
        if(a>b){return a;}else{return b;}
    }
    int maxSum(TreeNode* root,int* x){
        if(root==NULL){
            return 0;
        }
        int leftSum=0,rightSum=0; 
        if(root->left!=NULL){
            leftSum = maxSum(root->left,x);
        }
        if(root->right!=NULL){
            rightSum = maxSum(root->right,x);
        }
        
        *x = maximumValue(*x,(leftSum+rightSum+root->val));
        int maxSide = max(leftSum,rightSum);
        maxSide = max(root->val,(root->val+maxSide));
        *x = maximumValue(*x,maxSide);
        return maxSide;

    }
};