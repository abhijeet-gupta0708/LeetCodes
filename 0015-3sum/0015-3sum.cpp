class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());

        int low=0,high=nums.size()-1;

        vector<vector<int>>ans;
        int target=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i>0 && (nums[i]==nums[i-1])) continue;
            low=i+1;
            high=nums.size()-1;
            
            while(low<high)
            {
                int sum=nums[i]+nums[low]+nums[high];
                if(sum==target)
                {
                    vector<int>temp={nums[i],nums[low],nums[high]};
                    ans.push_back(temp);
                    while (low < high && nums[low] == nums[low + 1]) low++;
                    while (low < high && nums[high] == nums[high - 1]) high--;
                    low++;
                    high--;
                    
                }
                else if(sum>target)
                high--;
                else
                low++;
            }

        }
       return ans; 
    }
};