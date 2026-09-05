class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> maximum,minimum;
        int n = nums.size();
        maximum.push_back(nums[0]);
        minimum.push_back(nums[n-1]);
        for(int i = 1;i<nums.size();i++){
            int valMax = max(maximum.back(),nums[i]);
            int valMin = min(minimum.back(),nums[n-1-i]);
            maximum.push_back(valMax);
            minimum.push_back(valMin);
        }
        reverse(minimum.begin(),minimum.end());
        int res = INT_MAX;
        for(int i = 0;i<nums.size();i++){
            int score = (maximum[i]-minimum[i]); 
            if(score<=k){
                // res = min(score,res);}
                res = i;
                break;}
        }
        if(res == INT_MAX){return -1;}
        return res;
    
    }
};