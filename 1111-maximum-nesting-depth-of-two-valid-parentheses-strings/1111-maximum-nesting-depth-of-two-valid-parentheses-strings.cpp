class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int>ans;

        int count=0;

        for(int i=0;i<seq.length();i++)
        {
            if(seq[i]=='(')
            {
                count++;
                if(count%2==0)
                ans.push_back(0);
                else
                ans.push_back(1);
            }

            else if(seq[i]==')')
            {
                if(count%2==0)
                ans.push_back(0);
                else
                ans.push_back(1);

                count--;

            }
        }
      return ans;  
    }
};