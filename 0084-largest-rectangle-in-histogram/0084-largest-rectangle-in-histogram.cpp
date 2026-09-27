class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {

        // We will just find next greatest element and previous greatest element
        int n=heights.size();
        int right[n];
        int left[n];
        stack<int>st;
        int area=INT_MIN;
        // Next greatest element

        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            st.pop();

            right[i]=st.empty() ? n:st.top();

            st.push(i);
        }

        while(!st.empty()) st.pop();
        // Previous Greatest Elements

         for(int i=0;i<n;i++)
        {
            while(!st.empty() && heights[st.top()]>=heights[i])
            st.pop();

            left[i]=st.empty() ? -1:st.top();

            st.push(i);
        }

        // Now find the max area ;
        
        for(int i=0;i<n;i++)
        {
            area=max(area,(heights[i]*(right[i]-left[i]-1)));
        }
        return area;
    }
};