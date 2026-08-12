class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxm=piles[0];
        for(auto x : piles){
            maxm=max(maxm,x);
        }
        int low=1; int high=maxm; int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long currsum=0;
            for(auto x : piles){
                currsum+=(x+mid-1)/mid;
            }
            if(currsum<=h){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};