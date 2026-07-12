class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        stack <int> s;
        s.push(prices[0]);
        for(int i = 1;i<prices.size();i++){
            if(s.empty()){
                s.push(prices[i]);
            }
            else if(s.top()<prices[i]){
                profit += prices[i]-s.top();
                s.pop();
                s.push(prices[i]);
            }
            else{
                s.pop();
                s.push(prices[i]);
            }
        }
        return profit;
    }
};