class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        // code here
        if(k>q.size()){return q;}
        stack <int> s1,s2;
        for(int i = 0;i<k;i++){
            s1.push(q.front());
            q.pop();
        }
        while(q.empty() == false){
            s2.push(q.front());
            q.pop();
        }
        while(s1.empty() == false){
            q.push(s1.top());
            s1.pop();
        }
        while(s2.empty() == false){
            s1.push(s2.top());
            s2.pop();
        }
        while(s1.empty() == false){
            q.push(s1.top());
            s1.pop();
        }
        return q;
    }
};