class Solution {
public:
    int findMin(vector<int>& nums) {
        int ans=    INT_MAX ;
        int start=0,end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[start]<=nums[end])
            {
                ans=min(ans,nums[start]);
                break;
            }
            if(nums[mid]>=nums[start])
            {
                // Left Sorted hoga toh right ke taraft Move kro
                ans=min(ans,nums[start]);
                start=mid+1;
            }
            else 
                {ans=min(ans,nums[mid]);
            end=mid-1;
                }
        }

        return ans;
        
    }
};