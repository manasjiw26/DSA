class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // for column check 
        int n = 9;
        for(int i = 0;i<n;i++){
            vector<int> nums(10,0);
            for(int j = 0;j<n;j++){
                if(board[i][j] != '.'){
                int k = board[i][j] - '0';
                if(nums[(k - 1)] == 0){
                    nums[(k - 1)] = 1;
                }
                else{
                    return false;
                }
            }
        }// for row check 
        }
        for(int i = 0;i<n;i++){
            vector<int> nums(10,0);
            for(int j = 0;j<n;j++){
                if(board[j][i] != '.'){
                int k = board[j][i] - '0';
                if(nums[(k - 1)] == 0){
                    nums[(k - 1)] = 1;
                }
                else{
                    return false;
                }}
            }
        }

        // 3*3 check 
        for(int i = 0;i<3;i++){
            for(int j = 0;j<3;j++){
                unordered_set <int> s;
                for(int k = 0;k<3;k++){
                    for(int l = 0;l<3;l++){
                        int f = board[k + (i*3)][l + (j*3)] - '0';
                        if(f >= 0 && f<=9){
                            if(s.find(f) != s.end()){
                                return false;
                            }
                            s.insert(f);
                        }
                    }
                }
            }
        }
        
        
    
    return true;
    }
};