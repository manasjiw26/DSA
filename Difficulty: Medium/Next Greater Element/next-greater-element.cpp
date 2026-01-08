class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector <int> v;
        stack <int> s;
        s.push(arr[n-1]);
        v.push_back(-1);
        for(int i = n-2;i >= 0;i--){
            while(s.empty() != true && s.top()<=arr[i]){
                s.pop();
            }
            int ng = (s.empty() == true)? -1:s.top();
            v.push_back(ng);
            s.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};