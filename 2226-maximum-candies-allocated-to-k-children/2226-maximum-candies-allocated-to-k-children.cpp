class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {

        long long sum=0;
        for(int x:candies)
        sum+=x;
        if(sum<k) return 0;


        long long start=1;
        long long end=*max_element(candies.begin(),candies.end());
        long long ans=0;
        while(start<=end)
        {
        long long count=0,mid;
            mid=(start+(end-start)/2);

            for(int i=0;i<candies.size();i++)
            {
                count+=(candies[i])/mid;

            }
                if(count>=k)
                {
                    ans=mid;
                start=mid+1;
                } 
                else end=mid-1;
        }
        return ans;
        


    }
};