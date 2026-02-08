/* A binary tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> levelOrder(Node *root) {
        // code here
        vector<vector<int>> v;
        vector <int> t;
        queue <Node*> q;
        if(root == NULL){return v;}
        q.push(root);
        q.push(NULL); 
        while(q.empty()==false){
            if(q.front() == NULL){
                q.pop();
                v.push_back(t);
                if(q.empty() == true){break;}
                q.push(NULL);
                
                t.clear();
            }else{
                Node *curr = q.front();
                q.pop();
                if(curr->left!=NULL){q.push(curr->left);}
                if(curr->right!=NULL){q.push(curr->right);}
                t.push_back(curr->data);
            }
        }
        return v;
    }
};