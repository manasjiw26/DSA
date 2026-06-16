class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();
        int targetrow = 0;
        for(int i = 0;i<matrix.size();i++){
            if(matrix[i][n-1] >= target){
                targetrow = i;
                break;
            }
        }
        int low = 0,high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(matrix[targetrow][mid] == target)
            {
                return true;
            }
            else if(matrix[targetrow][mid] > target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return false;
    }
};