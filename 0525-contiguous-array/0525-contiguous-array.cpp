class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        int n=nums.size();
        int sum=0,max_length=0;
        map<int,int> mp;
        mp[0]=-1;
        for(int i=0;i<n;i++)
        {
            // Converting all 0 into -1
            if(nums[i]==0) nums[i]=-1;

            sum+=nums[i];

            if(mp.find(sum)!=mp.end())
            {
                max_length=max(max_length,i-mp[sum]);
            }
            else
            mp[sum]=i;


        }
             return max_length;
        
    }
};