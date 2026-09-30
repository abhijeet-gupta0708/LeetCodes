class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        int low=0,high=nums.size()-1;
        vector<int>psum;
        psum.push_back(0);
    int sum=0;
        for(int i=0;i<nums.size();i++)
        {   
            sum+=nums[i];
            psum.push_back(sum);
        }

        unordered_map<int,int>mpp;

        for(int i=0;i<psum.size();i++)
        {
            int rem=psum[i]%k;
            if(mpp.find(rem)!=mpp.end())
            {
                if(i-mpp[rem]>=2)
                return true;
            }
            else
            mpp[rem]=i;
        }
        return false;
        
    }
};