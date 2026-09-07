class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> k;
        subsetsMaker(nums,k,nums.size(),res);
        return res;
    }
    void subsetsMaker(vector<int>& nums,vector <int> subset,int size,vector<vector<int>> &res){
        if(size == 0){
            res.push_back(subset);
            return;
        }
        int index = nums.size()-size;
        subsetsMaker(nums,subset,size-1,res);
        subset.push_back(nums[index]);
        subsetsMaker(nums,subset,size-1,res);
    }
};