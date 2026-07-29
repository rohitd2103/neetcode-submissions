class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 0;
        int maxProfit = INT_MIN;
        while(r<prices.size()){
            while(prices[l]>prices[r]){
                l++;
            }
            int currProfit = prices[r]-prices[l];
            maxProfit = max(maxProfit,currProfit);

            r++;
        }

        return maxProfit;
    }
};
