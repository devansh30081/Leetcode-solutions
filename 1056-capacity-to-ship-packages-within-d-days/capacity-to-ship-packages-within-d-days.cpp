class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int maxm=weights[0];
        int sum=0;
        for(auto x : weights){
            maxm=max(maxm,x);
            sum+=x;
        }
        int low=maxm; int high=sum; int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            int reqdays=1;
            int currsum=0;
            for(auto x : weights){
               if(currsum+x<=mid){
                  currsum+=x;
               }
               else{
                currsum=x;
                reqdays++;
               }
            }
            if(reqdays>days){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};