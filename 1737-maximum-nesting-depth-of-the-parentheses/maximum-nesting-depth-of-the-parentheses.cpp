class Solution {
public:
    int maxDepth(string s) {
        int maxans=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                ans++;
                maxans=max(maxans,ans);
            }
            else if(s[i]==')'){
                ans--;
                maxans=max(maxans,ans);
            }
        }
           return maxans;
    }
};