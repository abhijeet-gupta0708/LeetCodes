class Solution {
public:
    int divide(int dividend, int divisor) {

        bool sign=false;
        if((dividend>0 && divisor >0)|| (dividend<0 && divisor<0))
        sign =true;

        if(dividend == divisor ) return 1;

        long long n=llabs((long long )dividend);
        long long d=llabs((long long )divisor);
        long long ans=0;
        while(n>=d)
        {
         int  count=0;
            while(n>=(d<<(count+1)))
             count++;
            ans+=(1LL<<count);
            n=n-(d<<count);
        }
        if((ans==(1LL<<31)) && sign ) return INT_MAX;
        if((ans==(1LL<<31)) && !sign ) return INT_MIN;
        if (sign)
        return ans;
        else
        return -ans;
    }
};