class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int r=0,l=0, max_length=0;
        int n=s.length();
        vector<int>hash(255,-1);

        while(r<n)
        {
            if(hash[s[r]]!=-1)
            {
                if(hash[s[r]]>=l)
                {
                    l=hash[s[r]]+1;
                }
            }

            max_length=max(max_length,r-l+1);
            hash[s[r]]=r;
            r++;

        }

       
          return max_length;  
    }
};