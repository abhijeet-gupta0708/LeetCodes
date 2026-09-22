class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int ind=0;
        vector<int>psum;
        psum.push_back(0);
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            psum.push_back(sum);
            
        }
        // Prefix array has been formed now traversed the array and find the index

        for(int i=0;i<psum.size()-1;i++)
        {
            int rsum=(sum-psum[i+1]);
            if(psum[i]==rsum) return i;
        }
        return -1;
    }
};