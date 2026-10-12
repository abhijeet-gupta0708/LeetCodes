class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();

        if (n < 2) return n;

        int count = 2;
        int maxi = 2;

        int i = 0;
        int j = 2;

        while (j < n) {
            if (1LL * nums[j - 1] + nums[j - 2] == nums[j]) {
                count = j - i + 1;
                maxi = max(maxi, count);
                j++;
            } else {
                i = j - 1;
                j++;
                count = 2;
            }
        }

        return maxi;
    }
};