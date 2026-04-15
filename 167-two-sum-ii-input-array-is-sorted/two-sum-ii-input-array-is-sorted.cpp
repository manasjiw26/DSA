class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int low = 0 , high = numbers.size()-1;
        while((numbers[low] + numbers[high]) != target && low < high){
            if ((numbers[low] + numbers[high]) == target){
                res.push_back(low+1);
                res.push_back(high+1);
                return res;
            }
            else if ((numbers[low] + numbers[high]) > target){
                high--;
            }else{
                low++;
            }
        }
        if ((numbers[low] + numbers[high]) == target){
            res.push_back(low+1);
            res.push_back(high+1);
                return res;
        }
        else{
            return res;
        }
    }
};