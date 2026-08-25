class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {

        int end=nums.size()-1;
        sort(nums.begin(),nums.end());
        int start=0;
        long long sum=0;
        while(start<=end)
        {
            vector<int>temp;
            temp.push_back(nums[start]);
            start++;
            temp.push_back(nums[end]);
            end--;
            temp.push_back(nums[end]);
            end--;

            sum+=temp[2];
        }

        return sum;
    }
};