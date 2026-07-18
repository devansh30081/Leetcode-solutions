class Solution {
public:
    bool checkGoodInteger(int n) {
        int ss=0;
        int s=0;
        while(n>0){
            int ld=n%10;
            s+=ld;
            ss+=ld*ld;
            n/=10;
        }
        if(ss-s>=50){
            return true;
        }
        else{
            return false;
        }
    }
};