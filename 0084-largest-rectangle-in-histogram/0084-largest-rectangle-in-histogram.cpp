class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // Is wale question mein hume next greater element or previous greatest element nikalna hoga
        int n=heights.size();
        int left[n];
        int right[n];
        stack<int>st;
        int area=INT_MIN;

        

        // Next Greater Element

        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            st.pop();

            right[i]=st.empty()?n:st.top();

            st.push(i);
        }
        
        while(!st.empty()) st.pop();
        
        // Prev Greatest Element

        for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            st.pop();

            left[i]=st.empty()?-1:st.top();

            st.push(i);
        }
        
        while(!st.empty()) st.pop();

        // Ab HUm apna area find krenge
        for(int i=0;i<n;i++)
        area=max(area,heights[i]*(right[i]-left[i]-1));

        return area;
    }
};