class Solution {
public:
    int counter = 0;
    void findCircleDFS(int n , vector<vector<int>> adj,int c,vector<int> &visited){
        visited[c] = 1;
        for(auto k : adj[c]){
            if(!visited[k]){findCircleDFS(n,adj,k,visited);}
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adj(n);
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                if(isConnected[i][j] == 1){adj[i].push_back(j);}
            }
        }
        vector<int> visited(n,0);
        for(int i = 0;i<n;i++){
            if(!visited[i]){visited[i] = 1;
            counter++;
            for(auto k : adj[i]){
            if(!visited[k]){findCircleDFS(n ,adj,i,visited);}
            }}
        }
        return counter;
    }
};