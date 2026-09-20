class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ind=INT_MAX;
        int n=nums.size();
        int closet=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int k=n-1;
            
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];

                if(abs(sum-target)<abs(closet-target))
                closet=sum;

                if(sum==target)
                {
                    return sum;
                }
                else if(sum>target)
                {
                k--;
                }
                else
                {
                j++;
                }

            }
        }
       return closet; 
    }
};