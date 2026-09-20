class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {

        int n=numbers.size()-1;
        int i=0,j=0,last=0,m;
        vector<int>ans;
        while(i<n)
        {
            int needed=numbers[i]+numbers[n];
            if(needed==target)
            {
                ans.push_back(i+1);
                ans.push_back(n+1);
                break;
            }
            else if(needed>target)
            n--;
            else
            i++;
        }


        return ans;


        
    }
};