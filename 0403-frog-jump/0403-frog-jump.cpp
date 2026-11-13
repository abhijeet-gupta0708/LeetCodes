class Solution {
public:
    int n;
    unordered_map<int,int>mpp;
    int t[2001][2001];

    bool check (vector<int>& stones,int curr_stone_ind,int prev_jump)
    {
        if (curr_stone_ind==n-1) return true;

        if(t[curr_stone_ind][prev_jump]!=-1) 
        return t[curr_stone_ind][prev_jump];

        bool status=false;

        for(int next_jump=prev_jump-1;next_jump<=prev_jump+1;next_jump++)
        {
            if(next_jump>0)
            {
            int next_stone=stones[curr_stone_ind]+next_jump;

            
                if(mpp.find(next_stone)!=mpp.end())
                {
                    status=status||check(stones,mpp[next_stone],next_jump);
                }
            }
        }

        return t[curr_stone_ind][prev_jump]=status;
    }
    bool canCross(vector<int>& stones) {

        n=stones.size();
        if(n==1) return true;
        if(stones[1]!=1) return false;

        for(int i=0;i<n;i++)
        mpp[stones[i]]=i;

        memset(t,-1,sizeof(t));
        return check(stones,0,0);


        
    }
};