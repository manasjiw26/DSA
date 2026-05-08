class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> s;
        generateSubsets(0 , nums ,ans , s);
    return ans;
    }
    void generateSubsets(int n,vector<int>& nums, vector<vector<int>> &ans,vector<int> s){
        if(n == nums.size()){
            ans.push_back({s});
            return;
        }

        s.push_back(nums[n]);
        generateSubsets(n+1 , nums ,ans ,s);

        s.pop_back();
        generateSubsets(n+1 , nums ,ans ,s);
        
    }
};