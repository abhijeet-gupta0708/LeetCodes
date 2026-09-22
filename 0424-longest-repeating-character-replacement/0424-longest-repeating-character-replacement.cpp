class Solution {
public:
    int characterReplacement(string s, int k) {

        int len=INT_MIN;
        int last=0,start=0,max_freq=0;

        unordered_map<char,int>mpp;

        while(last<s.length())
        {
            mpp[s[last]]++;
            max_freq=max(max_freq,mpp[s[last]]);

            // checking window size

            while((last-start+1)-max_freq >k)
            {
                mpp[s[start]]--;
                start++;
            }
            len=max(len,last-start+1);
            last++;
        }

        return len;
        

        
        
    }
};