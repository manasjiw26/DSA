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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue <TreeNode*> q;
        vector<vector<int>> res;
        if(root==NULL){return res;}
        q.push(root);
        int k = 2;
        while(q.size()!=0){
            int size = q.size();
            vector<int> levelVals;
            for(int i = 0;i<size;i++){
                TreeNode* temp = q.front();
                q.pop();
                levelVals.push_back(temp->val);
                if(temp->left){q.push(temp->left);}
                if(temp->right){q.push(temp->right);}
            }
            if(k%2==1){
                reverse(levelVals.begin(),levelVals.end());
            }
            k++;
            res.push_back(levelVals);
        }
        return res;
    }
};