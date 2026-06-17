class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        vector<int> subset;
        generatesubset(nums,result,0,subset);

        return result;
    }
    void generatesubset(vector<int>& nums , vector<vector<int>> &res,int index,vector<int> &subset){
        if(index == nums.size()){
            res.push_back(subset);
            return;
        }
    subset.push_back(nums[index]);
    generatesubset(nums,res,index+1,subset);

    subset.pop_back();
    generatesubset(nums,res,index+1,subset);
    }
};