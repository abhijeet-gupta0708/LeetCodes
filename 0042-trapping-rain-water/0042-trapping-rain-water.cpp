class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        int i=1, last=n-2;
        vector<int> left_max(n,0);      
        vector<int> right_max(n,0);

        left_max[0]=height[0];
        right_max[n-1]=height[n-1];

        while(i<n)
        {
            left_max[i]=max(left_max[i-1],height[i]);
            right_max[last]=max(right_max[last+1],height[last]);
            last--;
            i++;
        }
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=min(left_max[j],right_max[j])-height[j];
        }
        
        return sum;
    }
};