class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {

        int s=deck.size();
        vector<int>ans(s,-1);
        sort(deck.begin(),deck.end());

        int i=0;
        int j=0;
        bool skip=false;

        while(i<s)
        {
            if(ans[j]==-1)
            {
                if(skip==false)
                {
                    ans[j]=deck[i];
                    j=(j+1)%s;
                    i++;
                    skip=true;
                }
                else
                {
                skip=false;
                 j=(j+1)%s;}

            }
            else 
            j=(j+1)%s;
        }
        return ans;
    }
};