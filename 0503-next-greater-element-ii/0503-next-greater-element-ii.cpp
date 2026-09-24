class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {

        vector<int>ans;
        stack<int>st;
        int n=nums.size();
        for(int i=2*nums.size()-1;i>=0;i--)
        {
            int curr=nums[i%n];
            while(!st.empty() && st.top()<=curr)
            st.pop();

            if(i<n)
            {
            if(st.empty())
            ans.push_back(-1);
            else
            ans.push_back(st.top());
            }
            st.push(curr);
        }
        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};