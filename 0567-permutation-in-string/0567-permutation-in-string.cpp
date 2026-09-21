bool isfreqsame(int c1[],int c2[])
{
    for(int i=0;i<26;i++)
    {
        if(c1[i]!=c2[i])
        return false;
    }
    return true;
}
class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        int n=s1.length();
        int freq1[26]={0};
        for(int i=0;i<n;i++)
        {
            freq1[s1[i]-'a']++;
        }

        // Now Comparing with string 2 by fixing window size

        for(int j=0;j<s2.length();j++)
        {
            int windsize=0;
            int ind=j;
            int freq2[26]={0};

            while(windsize<n && ind<s2.length())
            {
                freq2[s2[ind]-'a']++;
                ind++;
                windsize++;
            }

            if(isfreqsame(freq1,freq2))
            return true;
        }
       return false; 
    }
};