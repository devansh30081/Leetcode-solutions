
class Solution {
public:
    string frequencySort(string s) {
        map<char,int> mp;

        for(auto x : s){
            mp[x]++;
        }

        map<int,string> mpp;

        for(auto x : mp){
            mpp[x.second] += x.first;
        }

        string ans = "";

        for(auto it = mpp.rbegin(); it != mpp.rend(); it++){
            for(auto x : it->second){
                ans.append(it->first, x);
            }
        }

        return ans;
    }
};
