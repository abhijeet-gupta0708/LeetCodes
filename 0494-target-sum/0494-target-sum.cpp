class Solution {
public:

int count=0;
int sum=0;
    int findsum(vector<int>& nums, int target,int i)
    {
        if(i==nums.size())
        {
            if (sum==target)
            {
                count++;
            }
            return count;
        }
        sum+=nums[i];
        findsum(nums,target,i+1);
        sum-=nums[i];
        sum-=nums[i];
        findsum(nums,target,i+1);
        sum+=nums[i];

        return count;
    }
    int findTargetSumWays(vector<int>& nums, int target) {

        return findsum(nums,target,0);
        int n=nums.size();

        
        
    }
};