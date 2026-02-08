/*  Structure of a Binary Tree

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */

class Solution {
  public:
    int maxWidth(Node* root) {
        // code here
        queue <Node*> q;
        int ans = 0;
        q.push(root);
        while(q.empty() == false){
            int count = q.size();
            ans = max(ans,count);
            for(int i = 0;i<count;i++){
                Node *curr = q.front();
                q.pop();
                if(curr->left != NULL){q.push(curr->left);}
                if(curr->right != NULL){q.push(curr->right);}
            }
        }
        return ans;
    }
};