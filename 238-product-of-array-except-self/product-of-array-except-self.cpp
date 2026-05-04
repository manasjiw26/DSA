class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
    vector<int> prefix,suffix;
    int preprod = 1, sufprod = 1;
    for(int i = 0;i<nums.size();i++){
        preprod = preprod*nums[i];
        prefix.push_back(preprod);
        sufprod = sufprod*nums[n-i-1];
        suffix.push_back(sufprod);
    }
    reverse(suffix.begin(),suffix.end());
    vector<int> res;
    res.push_back(suffix[1]);
    for(int i = 1;i<nums.size()-1;i++){
        res.push_back(prefix[i-1]*suffix[i+1]);
    }
    res.push_back(prefix[n-2]);
    return res;
    }
};