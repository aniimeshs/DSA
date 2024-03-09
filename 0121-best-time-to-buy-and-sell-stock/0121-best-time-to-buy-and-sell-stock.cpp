class Solution {
public:
    int findMax(vector<int>& prices, int i, int minPrice, int mxprofit){
        if(i == prices.size()){
            return mxprofit;
        }

        if(prices[i] < minPrice) minPrice = prices[i];

        if(prices[i] - minPrice  > mxprofit) 
            mxprofit = prices[i] - minPrice;

        return findMax(prices, i+1, minPrice, mxprofit);
    }
    int maxProfit(vector<int>& prices) {
        return findMax(prices, 0, INT_MAX, 0);
    }
};