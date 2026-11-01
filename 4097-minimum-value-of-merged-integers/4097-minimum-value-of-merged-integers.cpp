class Solution {
public:
    int minMergedInteger(vector<int>& nums) {

        vector<int>merged;

        int i=0,n=nums.size();

        while(i<n-1)
        {
            string first=to_string(nums[i]);
            string last=to_string(nums[i+1]);

            string ans=first+last;
            int addvalue=stoi(ans);
            merged.push_back(addvalue);

            i+=2;

        }

        sort(merged.begin(),merged.end());

        return merged[0];
        
    }
};