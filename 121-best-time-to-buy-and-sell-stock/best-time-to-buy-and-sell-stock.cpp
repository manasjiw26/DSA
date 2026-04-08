class Solution {
public:
int maximum(int a,int b){
    return a>=b ? a:b;
}
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
    vector <int> rightmax(n,0);
    int max = prices[n-1];
    int best = 0;
    for(int i = n-2;i>=0;i--){
        if(rightmax[i+1] >= max){
            max = maximum(rightmax[i+1],prices[i+1]);
        }
            rightmax[i] = max;
            best = maximum(best , rightmax[i]-prices[i]);
    }
    return best;
    }
};