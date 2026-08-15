class Solution {
public:
    bool canSplit(vector<int>&nums,int k,int maxsum){
       int subarray=1;
       int sum=0;
       for(int x : nums){
        if(sum+x<=maxsum){
            sum+=x;
        }
        else{
            subarray++;
            sum=x;
            if(subarray>k) return false;
        }
       }
       return true;
    }

   
    int splitArray(vector<int>& nums, int k) {
        int low=*max_element(nums.begin(),nums.end());
        int high=accumulate(nums.begin(),nums.end(),0);
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canSplit(nums,k,mid)){
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