class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2){
            return 0;
        }
        int n = prices.size();
        vector <int> maxonr(n+1,0);
        for(int i = prices.size()-1;i>=0;i--){
            maxonr[i] = max(maxonr[i+1],prices[i]);
        }

        int maxprofit = -1;
        for(int i=0;i<n;i++){
            maxprofit = max(maxprofit,maxonr[i]-prices[i]);
        }
        return maxprofit;
    }
};