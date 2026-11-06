class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {

        long long sum=0;
        vector<int>gains;

        for(int x:nums)
        {
            sum+=x;
            // Converting every x into its hegighest form

            string s=to_string(x);
            sort(s.rbegin(),s.rend());
            long long temp=stoll(s);
            // Putting the extra sum into gains.
            gains.push_back(temp-x);
        }

        sort(gains.rbegin(),gains.rend());

        for(int i=0;i<k;i++)
        {
            if(gains[i]>0)
            sum+=gains[i];
            else
            break;

        }

        return sum;
        
    }
};