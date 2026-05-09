class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(nums.size() == 1){
            return 0;
        }
        if(nums.size() > 1){
        if(nums[0] > nums[1]){
            return 0;
        }
        if(nums[n-2] < nums[n-1]){
            return n-1;
        }
        }

        int low = 0,high = nums.size()-1;
        while(low<high){
            int mid = low + (high-low) / 2;
            if(nums[mid] > nums[mid+1]){
                if(nums[mid] > nums[mid-1]){
                    return mid;
                }
                else{
                    high = mid;
                }
            }
            else{
                low = mid;
            }
        }
        return -1;
    }
};