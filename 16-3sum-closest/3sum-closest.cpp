class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    int n = nums.size();
    long long closest = INT_MAX;
    sort(nums.begin(),nums.end());
    for(int i = 0;i<n;i++){
        
        int low = i+1,high = n-1;
        while(low<high){
            if(abs(target - (nums[i]+nums[low]+nums[high])) < abs(target - closest)){
                closest = (nums[i]+nums[low]+nums[high]);
            }
            if((nums[i]+nums[low]+nums[high]) > target ){
                high--;
                
            }
            else if((nums[i]+nums[low]+nums[high]) < target ){
                low++;
            }
            else{
                return target;
            }
            
        }
    }
    return closest;
    }
};