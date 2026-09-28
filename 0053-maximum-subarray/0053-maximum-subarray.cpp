class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum=0;
        int maxsum=INT_MIN;
        int n=nums.size();
        int low=0,high=0;

        while(low<=high && high<n)
        {
            sum+=nums[high];
            
            maxsum=max(maxsum,sum);
            while(low<=high && sum<=0)
            {
                sum-=nums[low];
                low++;
            }
            high++;
        }

       return maxsum; 
    }
};