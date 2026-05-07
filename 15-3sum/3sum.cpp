class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    int n = nums.size();
    vector<vector<int>> res;  
    for(int i=0;i<n;i++){
        int low = i+1, high = n-1;
        if(i > 0 && nums[i] == nums[i - 1]) {
                continue;
        }

        while(low<high){
        
        if((nums[i]+nums[low]+nums[high]) > 0){
            high--;
        }
        else if((nums[i]+nums[low]+nums[high]) < 0){
            low++;
        }
        else{
            res.push_back({nums[i],nums[low],nums[high]});
            low++;
            high--;
            while(low < high && nums[low] == nums[low - 1]) {
                low++;
            }
            while(low < high && nums[high] == nums[high + 1]) {
                high--;
                }
        }
        }
    }
    return res;
    }
};