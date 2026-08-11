class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int max_length=0;

        for(int i=0;i<s.length();i++)
        {
        vector<int>hash(255,0);
            for(int j=i;j<s.length();j++)
            {
                if(hash[s[j]]==1)
                break;

                hash[s[j]]=1;

                max_length=max(max_length,j-i+1);
            }
        }
      return max_length;  
    }
};