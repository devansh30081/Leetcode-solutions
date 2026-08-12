class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long t = 1LL*m*k;
        if(t>bloomDay.size()) return -1;

        int minm=bloomDay[0];
        int maxm=bloomDay[0];
        for(auto x : bloomDay){
            minm=min(x,minm);
            maxm=max(x,maxm);
        }
        int low=minm; int high=maxm;
        int ans=-1;
        while(low<=high){
            int bouquets=0;
            int cnt=0; 
            int mid=low+(high-low)/2;
            for(auto x : bloomDay){
                if(mid>=x){
                  cnt++;
                }
                else{
                    bouquets+=(cnt)/k;
                    cnt=0;
                }
            }
            bouquets+=(cnt)/k;
            if(bouquets>=m){
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