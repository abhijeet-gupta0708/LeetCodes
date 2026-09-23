class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        if(nums.size()==1) return nums[0];

        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];

            if(sum<0)
            sum=0;

            maxi=max(maxi,sum);
        }
        int ele;
        if(maxi==0)
        {ele= *max_element(nums.begin(), nums.end());
            return ele;
        }
        return (ele>maxi)?ele:maxi;
    }
};