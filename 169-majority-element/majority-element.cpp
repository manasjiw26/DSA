class Solution {
public:
int maximum(int a,int b){
    return a<b?b:a;
}
    int majorityElement(vector<int>& nums) {
        unordered_map <int,int> freq;
        int max = INT_MIN;
        int maxnum;
        for(int i = 0;i<nums.size();i++){
            freq[nums[i]]++;
            max = maximum(freq[nums[i]],max);
            if(max == freq[nums[i]]){
                maxnum = nums[i];
            }
        }
        return maxnum;
    }
};