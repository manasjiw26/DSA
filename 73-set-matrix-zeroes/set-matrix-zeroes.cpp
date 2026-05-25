class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int x = -1,y = -1;
        for(int i = 0;i<m;i++){
            int n = matrix[i].size();
            for(int j = 0;j<n;j++){
                if(matrix[i][j] == 0){
                    if(i == 0){
                        y = 0;
                    }
                    if(j == 0){
                        x = 0;
                    }
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(int i = 1;i<m;i++){
            int n = matrix[i].size();
            for(int j = 1;j<n;j++){
                if(matrix[0][j] == 0 ||matrix[i][0] == 0){
                    matrix[i][j] = 0;
                }
            }
        }
        int n = matrix[0].size();
        if(y == 0){
            for(int i = 0;i<n;i++){
                matrix[0][i] = 0;
            }
        }
        if(x == 0){
            for(int i = 0;i<m;i++){
                matrix[i][0] = 0;
            }
        }
    }
};