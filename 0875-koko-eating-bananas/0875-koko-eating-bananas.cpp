class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int start=1;
        long long end=0;
        for(int x:piles)
        end+=x;
        while(start<=end)
        {
            long long count=0;
            long long mid=start+(end-start)/2;
            for(int i=0;i<piles.size();i++)
            {
                count+=(piles[i]+(mid-1))/mid;
            }
            if(count>h) start=mid+1;
            else 
            end=mid-1;
        }
        return start;
    }
};