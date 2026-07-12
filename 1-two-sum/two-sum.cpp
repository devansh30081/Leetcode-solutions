class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>v1;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        int i=0; int j=n-1;
        while(i<j){
            if(v[i].first+v[j].first==target){
                v1.push_back(v[i].second);
                v1.push_back(v[j].second);
                break;
            }
            else if(v[i].first+v[j].first>target){
                j--;
            }
            else{
                i++;
            }
        }
        return v1;
    }
};