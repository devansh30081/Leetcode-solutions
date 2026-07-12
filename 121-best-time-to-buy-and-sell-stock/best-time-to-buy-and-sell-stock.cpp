class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minm=INT_MAX;
        for(int i=0;i<prices.size();i++){
            minm=min(minm,prices[i]);
            maxprofit=max(maxprofit,prices[i]-minm);
        }
        return maxprofit;
    }
};