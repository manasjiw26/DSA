class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int num = nums[0];
        
        for(int i = 1;i<nums.size();i++){
            if(num == nums[i]){
                nums.erase(nums.begin()+i--);
                
            }
            else{
                num = nums[i];
            }
        }
        return nums.size();
    }
};