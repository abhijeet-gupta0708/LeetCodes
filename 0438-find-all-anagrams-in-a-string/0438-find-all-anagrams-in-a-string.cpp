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
    vector<int> findAnagrams(string s, string p) {

        // We will be using same technique as permutation string question


        vector<int>ans;
        int freq1[26]={0};
        if(p.size()>s.size()) return ans;

        for(int i=0;i<p.size();i++)
        freq1[p[i]-'a']++;

        for(int j=0;j<s.size();j++)
        {
            int freq2[26]={0};
            int ind=j;
            int windsize=0;

            while(windsize<p.size() && ind <s.length())
            {
                freq2[s[ind]-'a']++;
                windsize++;
                ind++;
            }
            // Checking if permutation exist

            if(isfreqsame(freq1,freq2))
            ans.push_back(j);

        }
        return ans;
    }
};