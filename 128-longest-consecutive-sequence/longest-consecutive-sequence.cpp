class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        int n = nums.size();
        if(n == 0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int maximum = 1,seq = 1;
        for(int i = 1;i<n;i++){
            if(nums[i] == (nums[i-1]+1)){
                seq++;
            }else{
                if(nums[i] != nums[i-1])
                {maximum = max(maximum,seq);
                seq = 1;}
            }
        }
        maximum = max(maximum,seq);
        return maximum;
    }
};