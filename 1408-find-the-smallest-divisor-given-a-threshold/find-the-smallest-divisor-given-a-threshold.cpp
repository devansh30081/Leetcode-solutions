class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int maxm=nums[0];
        for(auto x : nums){
            maxm=max(maxm,x);
        }
        int low=1; int high=maxm;
        int ans;
        while(low<=high){
            long long sum=0;
            int mid=low+(high-low)/2;
            for(auto x : nums){
                sum+=(x+mid-1)/mid;
            }
            if(sum<=threshold){
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