class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int n=v.size();
        int k=1;
        int idx=1;
        for(int i=1;i<n;i++){
          if(v[i]!=v[i-1]){
            v[idx]=v[i];
            idx++;
            k++;
          }
        }
        return k;
    }
};