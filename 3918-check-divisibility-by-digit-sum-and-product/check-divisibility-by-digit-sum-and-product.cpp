class Solution {
public:
    bool checkDivisibility(int n) {
        long long sum1=0;
        long long sum2=1;
        long long temp=n;
        while(temp>0){
            long long ld=temp%10;
            sum1+=ld;
            sum2*=ld;
            temp/=10;
        }
        if((1LL*n)%(sum1+sum2)==0){
            return true;
        }
        return false;
    }
};