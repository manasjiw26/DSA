class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jump = 1;
        int n = nums.size();
        if(nums.size() == 1){return true;}
    for(int i = n-2;i>=0;i--){
        if(nums[i] >= jump){
            jump = 0;
        }
            jump++;
    }

    return --jump == 0 ? true:false;
    }
};