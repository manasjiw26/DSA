class Solution {
public:
    int aliveneighbour(vector<vector<int>>& board,int i,int j){
        int n = board.size();
        int m = board[0].size();
        int alivecount = 0;
        if((i-1)>=0 &&  (board[i-1][j] == 1 || board[i-1][j] == -1)){
            alivecount++;
        }
        if((i+1)<n && (board[i+1][j] == 1 || board[i+1][j] == -1)){
            alivecount++;
        }
        if((j-1)>=0 && (board[i][j-1] == 1 || board[i][j-1] == -1)){
            alivecount++;
        }
        if((j+1)<m && (board[i][j+1] == 1 || board[i][j+1] == -1)){
            alivecount++;
        }


        if((j-1)>=0 && (i-1)>=0 && (board[i-1][j-1] == 1 || board[i-1][j-1] == -1)){
            alivecount++;
        }
        if((j+1)<m && (i+1)<n && (board[i+1][j+1] == 1 || board[i+1][j+1] == -1)){
            alivecount++;
        }if((j-1)>=0 && (i+1)<n && (board[i+1][j-1] == 1 || board[i+1][j-1] == -1)){
            alivecount++;
        }
        if((j+1)<m && (i-1)>=0 && (board[i-1][j+1] == 1 || board[i-1][j+1] == -1)){
            alivecount++;
        }
        return alivecount;
    }
    void gameOfLife(vector<vector<int>>& board) {
        int n = board.size();
        int m = board[0].size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                int alive = aliveneighbour(board,i,j);
                if(board[i][j] == 0){
                    if(alive == 3){board[i][j] = 2;}
                }else{
                    if(alive<2){board[i][j] = -1;}
                    else if(alive<=3){}else{
                        board[i][j]=-1;
                    }
                }
            }
        }


        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(board[i][j] == 2){
                    board[i][j] = 1;
                }
                if(board[i][j] == -1){
                    board[i][j] = 0;
                }
            }
        }
    }
};