/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    vector<Node*> clone = vector<Node*>(101, NULL);
    Node* cloneGraph(Node* node) {
        if(node == NULL){
            return NULL;
        }
        if(clone[node->val] != NULL){
            return clone[node->val];
        }
        Node *newG = new Node(node->val);
        clone[node->val] = newG;
            for(auto e : node->neighbors){
                newG->neighbors.push_back(cloneGraph(e));
            }
        return newG;
    }
};