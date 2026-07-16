class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int n = numbers.size();
        int low=0 ,high = n-1;
        while(low<high){
            if(target - (numbers[low]+numbers[high]) == 0){
                res.push_back(low+1);
                res.push_back(high+1);
                return res;
            }else if(target - (numbers[low]+numbers[high]) > 0){
                low++;
            }else{
                high--;
            }
        }
        return res;
    }
};