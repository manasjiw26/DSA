class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> res;
        int n = matrix.size();
        int m = matrix[0].size();
        int leftlim = 0,rightlim = m-1,bottomlim = n-1,toplim = 0;
        while(true){
            if(leftlim>rightlim || toplim>bottomlim){
                break;
            }
            for(int i = leftlim;i<=rightlim;i++){
                res.push_back(matrix[toplim][i]);
            }
            toplim++;
            if(leftlim>rightlim || toplim>bottomlim){
                break;
            }
            for(int i = toplim;i<=bottomlim;i++){
                res.push_back(matrix[i][rightlim]);
            }rightlim--;
            if(leftlim>rightlim || toplim>bottomlim){
                break;
            }
            for(int i = rightlim;i>=leftlim;i--){
                res.push_back(matrix[bottomlim][i]);
            }bottomlim--;
            if(leftlim>rightlim || toplim>bottomlim){
                break;
            }
            for(int i = bottomlim;i>=toplim;i--){
                res.push_back(matrix[i][leftlim]);
            }
            leftlim++;
            
        }
        return res;
    }
};