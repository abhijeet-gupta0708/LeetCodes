int find(vector<int>mat)
{
    int sum=0;
    for(int i=0;i<mat.size();i++)
    {
        sum+=mat[i];
    }
    return sum;
}
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int ans=INT_MIN;
        int row=accounts.size();
        int col=accounts[0].size();
        for(int i=0;i<row;i++)
        {
            int wealth=find(accounts[i]);
            ans=max(ans,wealth);
        }
        return ans;
    }
};