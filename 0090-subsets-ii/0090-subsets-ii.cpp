class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
       int subset = 1<< n;
       for(int mask=0;mask<subset;mask++)
       {
        vector<int> list;
        for(int i=0;i<n;i++)
        {
            if(mask & (1<<i))
            list.push_back(nums[i]);
        }
           if (find(ans.begin(), ans.end(), list) == ans.end())
            {
            ans.push_back(list);
           }
       }
        return ans;
    }
};