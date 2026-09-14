class Solution {
public:
    int counter = 0;
    int numIslands(vector<vector<char>>& grid) {
        if(grid.size() == 0){return 0;}
        int m = grid[0].size();
        vector<vector<bool>> vis(grid.size(),vector<bool>(m,false));
        for(int i = 0;i<grid.size();i++){
            for(int j = 0;j<grid[0].size();j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    counter++;
                    vis[i][j] = 1;
                    if(i+1<grid.size() && grid[i+1][j] == '1'){
                        island(grid,vis,i+1,j);
                    }
                    if(j+1<grid[0].size() && grid[i][j+1] == '1'){
                        island(grid,vis,i,j+1);
                    }
                }
            }
        }
        return counter;
    }
    void island(vector<vector<char>>& grid,vector<vector<bool>> &vis,int i,int j){
        vis[i][j] = 1;
        if(grid[i][j] == '1'){
            if(i+1<grid.size() && !vis[i+1][j] && grid[i+1][j] == '1'){
                island(grid,vis,i+1,j);
            }
            if(j+1<grid[0].size() && !vis[i][j+1] && grid[i][j+1] == '1'){
                island(grid,vis,i,j+1);
            }
            if(i-1>=0 && !vis[i-1][j] && grid[i-1][j] == '1'){
                island(grid,vis,i-1,j);
            }
            if(j-1>=0 && !vis[i][j-1] && grid[i][j-1] == '1'){
                island(grid,vis,i,j-1);
            }
        }
    }
};