class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        for(int i:prices)
        {
            minPrice = min(i,minPrice);
            maxProfit = max(maxProfit, i - minPrice);
        }
        return maxProfit;
    }
};
