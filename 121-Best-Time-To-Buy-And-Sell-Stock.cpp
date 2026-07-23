class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int BestBuy = prices[0];
        int profit = 0;
        for(int i = 1 ; i < prices.size() ; i++)
        {
            
            if(prices[i] > BestBuy)
            {
                profit = max(profit,prices[i]-BestBuy);
               

            }
             BestBuy = min(BestBuy,prices[i]);
           
            
        }
         return profit;
        
    }
};