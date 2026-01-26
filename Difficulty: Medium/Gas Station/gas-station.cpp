class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        //  code here
        int n = gas.size(),sum = 0;
        vector <int> q;
        for(int i = 0;i<n;i++){
            q.push_back(gas[i]-cost[i]);
            sum += gas[i]-cost[i];
        }
        if(sum >= 0){
            int start = 0,currentFuel = 0;
            for(int i=0;i<n;i++){
                currentFuel += gas[i]-cost[i];
                if(currentFuel<0){
                    start = i+1;
                    currentFuel = 0;
                }
            }
            return start;
            
        }
        else
        {
            return -1;
        }
    }
};