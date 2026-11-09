class Solution {

public:

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