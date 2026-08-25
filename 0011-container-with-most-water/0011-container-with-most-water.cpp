class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=INT_MAX;
        int low=0;
        int high=height.size()-1;
    int area=INT_MIN;
        while(low<=high)
        {
            int min_height=min(height[low],height[high]);
            area=max(area,(min_height*(high-low)));
            if(height[low]<height[high])
            low++;
            else
            high--;
        }
        return area;
    }
};