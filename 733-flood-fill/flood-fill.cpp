class Solution {
public:
    int startPixel = 0;
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<bool>> vis(image.size(),vector<bool>(image[0].size(),false));
        startPixel = image[sr][sc];
        fill(image,sr,sc,color,vis);
        return image;
    }
    void fill(vector<vector<int>>& image, int sr, int sc, int color,vector<vector<bool>> &vis){
        if(!vis[sr][sc]){
            vis[sr][sc] = 1;
            if(image[sr][sc] == startPixel){
                image[sr][sc] = color;
                if(sr+1<image.size() && !vis[sr+1][sc] && image[sr+1][sc] == startPixel){
                    fill(image,sr+1,sc,color,vis);
                }
                if(sc+1<image[0].size() && !vis[sr][sc+1] && image[sr][sc+1] == startPixel){
                    fill(image,sr,sc+1,color,vis);
                }
                if(sr-1>=0 && !vis[sr-1][sc] && image[sr-1][sc] == startPixel){
                    fill(image,sr-1,sc,color,vis);
                }
                if(sc-1>=0 && !vis[sr][sc-1] && image[sr][sc-1] == startPixel){
                    fill(image,sr,sc-1,color,vis);
                }
            }
        }
    }
};