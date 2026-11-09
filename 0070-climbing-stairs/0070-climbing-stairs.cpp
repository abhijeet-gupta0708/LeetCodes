class Solution {

public:

    // Har ek seedhi ke liye 2 option hai ek 1 seedhi 2: 2 seedhi so inshort we can say for every f(n) we have 2 solution f(n-1)+f(n-2) ; f(n)=f(n-1)+f(n-2);

    int fact(vector<int>&dp,int n)
    {
        if(n==1||n==2) return n;

        if(dp[n]!=-1) return dp[n];

        return dp[n]=fact(dp,n-1)+fact(dp,n-2);
    }
    int climbStairs(int n) {

        vector<int>dp(n+1,-1);

        return fact(dp,n);
        
    }
};