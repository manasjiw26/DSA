/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> leftView(Node *root) {
        // code here
        vector<int> t;
        queue <Node*> q;
        q.push(root);
        while(q.empty() == false){
                int count = q.size();
                for(int i=0;i<count;i++){
                    Node *curr = q.front();
                    q.pop();
                    if(curr->left != NULL){q.push(curr->left);}
                    if(curr->right != NULL){q.push(curr->right);}
                    if(i == 0){t.push_back(curr->data);}
            }
        }
        return t;
    }
};