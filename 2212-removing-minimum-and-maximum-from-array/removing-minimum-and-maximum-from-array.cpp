class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 1;
        }
        int idx1=(min_element(nums.begin(),nums.end())-nums.begin());
        int idx2=(max_element(nums.begin(),nums.end())-nums.begin());
        int minm=INT_MAX;
        if(idx1<idx2){
            minm=min(minm,idx2+1);
            minm=min(minm,n-idx1);
            minm=min(minm,idx1+1+n-idx2);
        }
        else{
            minm=min(minm,idx1+1);
            minm=min(minm,n-idx2);
            minm=min(minm,idx2+1+n-idx1);
        }
        return minm;
    }
};