class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        vector <vector<int>> intersection;
        sort(points.begin(),points.end());
        intersection.push_back(points[0]);
        for(int i = 1;i<points.size();i++){
            int k = 0;
            bool pointer = false;
            while(k<intersection.size() && pointer == false){
                if(intersection[k][1]>=points[i][0]){
                intersection[k][0] = points[i][0];
                intersection[k][1] = min(points[i][1],intersection[k][1]);
                pointer = true;
                break;
            }
            else{
                k++;
            }}
            if(pointer == false){
                
                intersection.push_back(points[i]);
                
            }
        }
        return intersection.size();
    }
};