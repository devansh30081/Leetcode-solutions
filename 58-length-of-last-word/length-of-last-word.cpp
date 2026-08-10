class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        string ans;

        if (s[n-1] != ' ') {
            for (int i=n-1; i>=0 && s[i]!=' '; i--) {
                ans += s[i];
            }
        }
        else {
            int i = n-1;

            while (i>=0 && s[i]==' ')
                i--;

            for (int j=i; j>=0 && s[j]!=' '; j--) {
                ans += s[j];
            }
        }

        return ans.size();
    }
};