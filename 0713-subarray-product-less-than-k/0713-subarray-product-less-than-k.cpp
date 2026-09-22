class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

    if(k<=1) return {0};
       
        int count=0;

        int last=0,start=0;
        int mul=1;
        
        while(last<nums.size())
        {
            mul*=nums[last];

            while( mul>=k)
            {
                mul/=nums[start];
                start++;

            }
            count+=last-start+1;
            last++;
        }
       return count; 
    }
};