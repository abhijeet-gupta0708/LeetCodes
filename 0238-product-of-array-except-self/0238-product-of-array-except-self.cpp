class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>arr(n,0);

        int left=1,right=1;

        for(int i=0;i<n;i++)
        {
            arr[i]=left;
            left*=nums[i];
        }
        for(int i=n-1;i>=0;i--)
        {
            arr[i]=arr[i]*right;
            right*=nums[i];
        }
        return arr;
    }
};