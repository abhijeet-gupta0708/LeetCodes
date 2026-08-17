class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {

        int start=1;
        int end=*max_element(nums.begin(),nums.end());
        
        while(start<=end)
        {
            int mid=start+(end-start)/2;

            int count=0;
            for(int i=0;i<nums.size();i++)
            {
                //count+=ceil(nums[i]/mid);
                count+=(nums[i]+(mid-1))/mid;
            }
            if(count>threshold) start=mid+1;
            else
            end=mid-1;
        }

        return start;
    }
};