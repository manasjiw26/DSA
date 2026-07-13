class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int> carGas;
        int sum=0;
        for(int i= 0;i<gas.size();i++){
            sum+=gas[i]-cost[i];
        }
    if(sum<0){
        return -1;
    }else{
        int start = 0;
        int currentGas = 0;
        for(int i=0;i<gas.size();i++){
            currentGas += gas[i];
            if(currentGas<cost[i]){
                
                start=i+1;
                currentGas=0;
            }
            else{
                currentGas-=cost[i];
            }
        }
        return start;
    }
    
    }
};