class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {

        long long ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int lar=nums[i];
            int smal=nums[i];

            for(int j=i+1;j<nums.size();j++)
            {
                lar=max(lar,nums[j]);
                smal=min(smal,nums[j]);

                ans+=(lar-smal);
            }
        }
        return ans;
    }
};