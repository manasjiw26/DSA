class Solution {
public:

    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> visited(n,0);
        vector<vector<int>> adj(n);
        for(auto edge : edges){
            adj[edge[1]].push_back(edge[0]);
            adj[edge[0]].push_back(edge[1]);
        }
        return validPathExist(n,edges,source,destination,visited,adj);
    }
    bool validPathExist(int n,vector<vector<int>>& edges,int source,int destination,vector<int> &visited,vector<vector<int>> &adj){
        visited[source] = 1;
        if(source == destination){
            return true;
        }
        bool res = false;
        for(int node : adj[source]){
            if(!visited[node]){
                res += validPathExist(n,edges,node,destination,visited,adj);
            }
        }
        return res;
    }
};