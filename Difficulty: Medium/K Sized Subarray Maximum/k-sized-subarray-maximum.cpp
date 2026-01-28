class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        // code here
        deque <int> q;
        vector <int> v;
        int n = arr.size();
        
        for(int i = 0;i<k;i++){
            while(!q.empty()&&arr[i]>=arr[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
        }
        v.push_back(arr[q.front()]);
        for(int i = k;i<n;i++){
            while(!q.empty()&& q.front()<i-k+1){
                q.pop_front();
            }
            while(!q.empty()&&arr[i]>=arr[q.back()]){
                q.pop_back();
            }
            q.push_back(i);
            v.push_back(arr[q.front()]);
        }
        return v;
    }
};