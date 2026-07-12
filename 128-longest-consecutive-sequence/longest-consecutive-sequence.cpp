class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        int n=v.size();
        set<int>s;
        for(auto x : v){
            s.insert(x);
        }
        vector<int>ans;
        for(auto x : s){
            ans.push_back(x);
        }
        if(ans.size()==0)return 0;
        int count=1;
        int maxm=1;
        for(int i=1;i<ans.size();i++){
            
           
                if(ans[i]-ans[i-1]==1){
                    count++;
                    maxm=max(maxm,count);
                }
                else{
                    count=1+0;
                }
            
        }
        return maxm;
    }
};