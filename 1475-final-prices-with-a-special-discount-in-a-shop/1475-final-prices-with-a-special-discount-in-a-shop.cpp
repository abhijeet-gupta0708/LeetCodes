class Solution {
public:
    void findsmall(vector<int>&prices,vector<int>&small)
    {
        int n=small.size();
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()>prices[i])
            st.pop();

            if(st.size()==0) small[i]=-1;
            else
            small[i]=st.top();

            st.push(prices[i]);
        }

    }
    vector<int> finalPrices(vector<int>& prices) {

        // Find next smallar element
        int n=prices.size();
        vector<int>small(n,0);
        findsmall(prices,small);
        vector<int>sum(n,0);

        for(int i=0;i<n;i++)
        {
            if(small[i]==-1) sum [i]=prices[i];

            else
            sum[i]=prices[i]-small[i];
        }
        return sum;
    }
};