class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n < 2){
            return true;
        }
        int toreach = nums.size()-1;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i] >= (toreach-i)){
                toreach = i; 
            }
        }
        return toreach==0?true:false;
    }
};