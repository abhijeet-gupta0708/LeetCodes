class Solution {
public:
    bool search(vector<int>& nums, int target) {


        int start=0,end=nums.size()-1;

        while(start<=end)
        {
            int mid=start+(end-start)/2;

            if(nums[mid]==target) return true;

            if(nums[mid]==nums[start ] && nums[mid]==nums[end])
            {
                start++;
                end--;
                continue;
            }
            if(nums[start]<=nums[mid])
            {
                // Left side searching hoga 

                if(nums[start]<=target && nums[mid]>target)
                end=mid-1;
                else
                start=mid+1;
            }
            else
            {
                // Right side searching hogaa ab
                if(nums[end]>=target && nums[mid]<target)
                {
                    start=mid+1;

                }
                else 
                end=mid-1;
            }
        }
    return false;


        
    }
};