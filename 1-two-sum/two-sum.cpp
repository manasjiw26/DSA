class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> v;
        vector<int> res;
        for(int i = 0;i<nums.size();i++){
            v[nums[i]] = i;
        }
        for(int i = 0;i<nums.size();i++){
            if(v.find(target-nums[i])!=v.end() && i!=v[target-nums[i]]){
                res.push_back(i);
                res.push_back(v[target-nums[i]]);
                return res;
            }
        }
        return res;
    }
};