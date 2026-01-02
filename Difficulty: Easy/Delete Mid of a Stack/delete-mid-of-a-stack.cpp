class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        stack <int> v;
        int n = 0;
        while(s.empty()!=true){
            v.push(s.top());
            s.pop();
            n++;
        }
        for(int j = 1;j<floor((n+1)/2);j++){
            s.push(v.top());
            v.pop();
        }
        v.pop();
        while(v.empty()!=true){
            s.push(v.top());
            v.pop();
        }
    }
};