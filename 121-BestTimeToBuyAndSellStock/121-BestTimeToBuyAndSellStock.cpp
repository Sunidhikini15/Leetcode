// Last updated: 2/19/2026, 6:14:23 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buyPrice=prices[0];
       int profit=0;
       for(int i=1;i<prices.size();i++){
        if(buyPrice>prices[i]){
            buyPrice=prices[i];
        }
        profit=max(profit,prices[i]-buyPrice);
       } 
       return profit;
    }
};