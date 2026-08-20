class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>m,n;
        vector<int>v;
        m.push_back(nums[0]);
        n.push_back(nums[1]);
        for(int i=2;i<nums.size();i++){
            if(m.back()>n.back()){
                m.push_back(nums[i]);
            }
            else{
                n.push_back(nums[i]);
            }
        }
        for(auto x : m){
            v.push_back(x);
        }
        for(auto x : n){
            v.push_back(x);
        }
        return v;
    }
};