class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        // code here
        vector <int> v;
        stack <int> s;
        s.push(0);
        v.push_back(1);
        for(int i = 1;i<arr.size();i++){
            while(s.empty()!=true && arr[s.top()]<=arr[i]){
                s.pop();
            }
            int span = (s.empty() == true)? (i+1):(i-s.top());
            v.push_back(span);
            s.push(i);
        }
        return v;
    }
};