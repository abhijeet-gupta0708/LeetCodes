class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int length=0,n=nums.size(),r=0,l=0,zero=0;
       
       while(r<n)
       {
        if(nums[r]==0) zero++;

        while(zero>k)
        {
            if(nums[l]==0) zero--;
            l++;
        }
        length=max(length,r-l+1);
        r++;
       }
        return length;
    }
};