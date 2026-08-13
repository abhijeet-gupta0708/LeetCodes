class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       int count=0;
       int psum=0;
       unordered_map<int,int>mpp;
       mpp[0]=1;
       for(int i=0;i<nums.size();i++)
       {
        psum+=nums[i];
        int remove=psum-k;
        count+=mpp[remove];
        mpp[psum]++;
       }

        return count;
    }
};