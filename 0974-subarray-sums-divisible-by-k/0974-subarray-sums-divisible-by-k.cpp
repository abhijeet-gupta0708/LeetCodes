class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    
    {
        int n=nums.size();
        unordered_map<int,int>mpp;
        mpp[0]=1;
        int psum=0;
        int count=0;

        for(int i=0;i<n;i++)
        {
            psum+=nums[i];
            int sum=psum%k;
           
            if(sum<0)
            {sum+=k;
            
            }
                count+=mpp[sum];
            mpp[sum]++;
        }
       return count; 
    }
};