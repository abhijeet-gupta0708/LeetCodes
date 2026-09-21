class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        // Sortting the array
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        for(int i=0;i<n;i++)
        {
            if(i>0 && (nums[i]==nums[i-1])) continue;
            for(int j=i+1;j<n;j++)
            {
                int k=j+1;
                int l=n-1;

                if(j>i+1 && (nums[j]==nums[j-1])) continue;

                // Now using Two pointer Approach

                while(k<l)
                {
                    long long sum=nums[i]+nums[j];
                    sum+=nums[k]+nums[l];
                    vector<int>temp;
                    if(sum==target)
                    {
                        temp.push_back(nums[i]);
                        temp.push_back(nums[j]);
                        temp.push_back(nums[k]);
                        temp.push_back(nums[l]);

                        while(k<l && (nums[k]==nums[k+1])) k++;
                        while(k<l && (nums[l]==nums[l-1])) l--;
                        
                        k++;
                        l--;
                    }
                    else if(sum>target)
                    l--;
                    else
                    k++;
                if(temp.size())
                ans.push_back(temp);
                }

            }
        }
       return ans; 
    }
};