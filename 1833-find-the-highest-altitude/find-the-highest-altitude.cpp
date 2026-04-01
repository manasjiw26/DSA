class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = 0,alt = 0;
        for(int i = 0;i<gain.size();i++){
            alt += gain[i];
            max = (max<alt)? alt:max;
        }
        return max;
    }
};