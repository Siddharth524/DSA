class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int min_price=prices[0];
        // for(int i =0 ;i<prices.size();i++){
        //     for(int j = i;j<prices.size();j++){
        //         int profit = prices[j]-prices[i];
        //         maxProfit = max(profit,maxProfit);
        //     }
        // }
        for(int i=1;i<prices.size();i++){
            maxProfit = max(maxProfit,prices[i]-min_price);
            min_price = min(prices[i],min_price);
        }


        
        return maxProfit;
    }
};

