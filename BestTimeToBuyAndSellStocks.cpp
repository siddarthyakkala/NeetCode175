class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int MaxProfit=0;
        int MinPrice=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            MinPrice=min(prices[i],MinPrice);
            MaxProfit=max(MaxProfit,prices[i]-MinPrice);
        }
        
        return MaxProfit;
    }
};
