class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        int n = nums.size();

        sort(nums.begin(), nums.end());

        vector<vector<int>> finalans;

        for(int i = 0; i < n; i++)
        {
            // Skip duplicate i
            if(i > 0 && nums[i] == nums[i - 1])
                continue;

            int j = i + 1;
            int k = n - 1;

            while(j < k)
            {
                int needed = nums[i] + nums[j] + nums[k];

                if(needed == 0)
                {
                    vector<int> ans;

                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    ans.push_back(nums[k]);

                    finalans.push_back(ans);

                    // Skip duplicate j
                    while(j < k && nums[j] == nums[j + 1])
                        j++;

                    // Skip duplicate k
                    while(j < k && nums[k] == nums[k - 1])
                        k--;

                    // Move both pointers
                    j++;
                    k--;
                }

                else if(needed > 0)
                {
                    k--;
                }

                else
                {
                    j++;
                }
            }
        }

        return finalans;
    }
};