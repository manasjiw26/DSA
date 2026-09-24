class Solution {
public:
    void solveGraph(vector<vector<char>>& board,vector<vector<bool>> &vis,int i,int j){
        int m = board.size();
        int n = board[0].size();
        if(vis[i][j] && board[i][j] != 'O'){return;}
        vis[i][j] = true;
        
            if(i-1 >= 0 && !vis[i-1][j] && board[i-1][j] == 'O'){
                solveGraph(board,vis,i-1,j);
            }
            if(j-1 >= 0 && !vis[i][j-1] && board[i][j-1] == 'O'){
                solveGraph(board,vis,i,j-1);
            }
            if(i+1 < m && !vis[i+1][j] && board[i+1][j] == 'O'){
                solveGraph(board,vis,i+1,j);
            }
            if(j+1 < n && !vis[i][j+1] && board[i][j+1] == 'O'){
                solveGraph(board,vis,i,j+1);
            }
        
        
    }
    void solve(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> vis(m,vector<bool>(n,false));
        for(int i = 0;i<m;i++){
            if(vis[i][0] == false && board[i][0] == 'O'){
                solveGraph(board,vis,i,0);
            }

            if(vis[m-i-1][n-1] == false && board[m-i-1][n-1] == 'O'){
                solveGraph(board,vis,m-i-1,n-1);
            }
            vis[i][0] = true;
            vis[m-i-1][n-1] = true;
        }
        for(int j = 0;j<n;j++){
            if(vis[0][j] == false && board[0][j] == 'O'){
                solveGraph(board,vis,0,j);
            }

            if(vis[m-1][n-j-1] == false && board[m-1][n-j-1] == 'O'){
                solveGraph(board,vis,m-1,n-j-1);
            }
            vis[0][j] = true;
            vis[m-1][n-j-1] = true;
        }
        for(int i = 0;i<m;i++){
            for(int j = 0;j<n;j++){
                if(!vis[i][j] && board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
            }
        }
        
    }
    
};