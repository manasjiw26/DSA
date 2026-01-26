class Solution {
  public:
    void reverseQueue(queue<int> &q) {
        // code here
        int n = q.size();
        if(q.empty()){return;}
        int x = q.front();
        q.pop();
        reverseQueue(q);
        q.push(x);
    }
};