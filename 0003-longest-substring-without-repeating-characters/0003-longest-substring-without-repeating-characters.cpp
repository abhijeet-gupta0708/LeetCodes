class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int first=0,last=0,i=0;
        vector<int>hash(256,0);

        while(last<s.length())
        {
            while(hash[s[last]])
            {
                hash[s[first]]=0;
                first++;
                
            }
            hash[s[last]]=1;
            i=max(i,last-first+1);
            last++;
            
        }
        return i;
    }
};