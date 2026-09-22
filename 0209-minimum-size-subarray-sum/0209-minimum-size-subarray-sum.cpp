class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int len=INT_MAX;
        int last=0,start=0;
    
    int sum=0;
        while(last<nums.size())
        {
            
            sum+=nums[last];

            while(sum>=target)
            {
                len=min(len,(last-start+1));
                sum-=nums[start];
                start++;
            }
            
            last++;

        }
        return len==INT_MAX ?0:len;

    }
};