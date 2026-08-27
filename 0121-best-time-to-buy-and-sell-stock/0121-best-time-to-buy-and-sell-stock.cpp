class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int m=prices[0];
        for(int i=0;i<n;i++){
            m=min(prices[i],m);
            int cost=prices[i]-m;
            profit=max(profit,cost);
        }
        return profit;
    }
};