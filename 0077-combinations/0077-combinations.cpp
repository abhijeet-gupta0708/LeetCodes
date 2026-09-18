void listt(int i, int n, int k, vector<int>&path,vector<vector<int>>&ans)
{
    while(path.size()==k)
    {
        ans.push_back(path);
        return ;

    }

    for(int j=i;j<=n;j++)
    {
        path.push_back(j);
        listt(j+1,n,k,path,ans);
        path.pop_back();
    }
    return ;
}
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {

        vector<vector<int>>ans;
        vector<int>path;
        (listt(1,n,k,path,ans));
     return ans;   
    }
};