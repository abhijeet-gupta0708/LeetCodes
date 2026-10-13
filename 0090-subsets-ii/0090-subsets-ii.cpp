class Solution {
public:

    void print(vector<int>&nums,vector<int>&temp,vector<vector<int>>&ans,int i,int n)
    {
        if(i==n) 
        {
            ans.push_back(temp);

        return; 
    }


        temp.push_back(nums[i]);
        print(nums,temp,ans,i+1,n);

        temp.pop_back();
       int index=i+1;

        while(index<n && nums[index]==nums[index-1])
        index++;

        print(nums,temp,ans,index,n);

        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort (nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        int n=nums.size();
        print(nums,temp,ans,0,n);
        return ans;
    }
};