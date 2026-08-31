class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans=0;

        int idx=-1;
        for(int i=columnTitle.size()-1;i>=0;i--){
            idx++;
            ans+=pow(26,idx)*((int)columnTitle[i]-64);
        }
        return ans;
    }
};