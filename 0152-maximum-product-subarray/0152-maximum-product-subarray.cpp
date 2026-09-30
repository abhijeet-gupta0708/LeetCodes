class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int prefix=1,suffix=1;
        int n=nums.size();
        int maxpro=nums[0];

        for(int i=0;i<n;i++)
        {
            if( suffix==0)suffix=1;
            if(prefix==0)prefix=1;

            prefix*=nums[i];
            suffix*=nums[n-i-1];
            maxpro=max(maxpro,max(prefix,suffix));
        }
        return maxpro;
        
    }
};