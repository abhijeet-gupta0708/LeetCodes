class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int n=nums.size();
        int count=0;
       unordered_map<int,int>mpp;
       mpp[0]=1;
       int psum=0;
       for(int i=0;i<n;i++)
       {
        psum+=nums[i];
        int remove=psum-goal;
        count+=mpp[remove];
        mpp[psum]++;
       }
        return count;
    }
};