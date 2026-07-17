class Solution {
public:
    int maxArea(vector<int>& height) {
        int watermax = 0;
        int low =0,high = height.size()-1;
        while(low<high){
            watermax = max(min(height[low],height[high])*(high-low),watermax);
            if(height[low]<height[high]){
                low++;
            }else{
                high--;
            }
        }
        return watermax;
    }
};