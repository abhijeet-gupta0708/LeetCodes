class Solution {
public:

    void print(vector<int>& nums,vector<int>&temp,vector<vector<int>>&ans,int i,int n)
    {
        if(i>=n) 
        {
        ans.push_back(temp);
            return;
        }
        temp.push_back(nums[i]);
        print(nums,temp,ans,i+1,n);
        temp.pop_back();
        print(nums,temp,ans,i+1,n);
    }
    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>>ans;
        vector<int>temp;
        int i=0;
        int n=nums.size();

        print(nums,temp,ans,i,n);

        return ans;
        
    }
};