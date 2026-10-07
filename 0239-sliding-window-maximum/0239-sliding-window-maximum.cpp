class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        // Using Deque method

        int n=nums.size();
        deque<int>dq;
        vector<int>ans;

        // Making the window of fixed size that is k
        for(int i=0;i<k;i++)
        {
            // Removing and adding potential index that could lead us to answer
            while(dq.size()>0 && nums[dq.back()]<=nums[i])
            dq.pop_back();

            dq.push_back(i);
        }

        // Now sliding over the iteration and keeping the check over all the iteration and the limit of the window size

        for(int i=k;i<n;i++)
        {
            ans.push_back(nums[dq.front()]);

            // Cheking if the index is under the size of 3 or not 

            while(dq.size()>0 && (i-k)>=dq.front())
            dq.pop_front();

            // Ab aage badho 

            while(dq.size()>0 && nums[dq.back()]<=nums[i])
            dq.pop_back();

            dq.push_back(i);

        }
        if(!dq.empty())
        ans.push_back(nums[dq.front()]);
        return ans;
    }
};