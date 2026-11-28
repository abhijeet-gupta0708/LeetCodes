class Solution {
public:
    bool isSubsequence(string s, string t) {
        int ss=s.length();
        int ts=t.length();
        int i=0,j=0;

        while(j<ts)
        {
            if(s[i]==t[j])
            i++,j++;

            else
            j++;
        }

        if(i==ss)return true;
        else return false;

        
    }
};