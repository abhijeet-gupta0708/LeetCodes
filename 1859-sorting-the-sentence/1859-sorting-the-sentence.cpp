class Solution {
public:
    string sortSentence(string s) {

        vector<string>st(10);

        int i=0;
        while(i<s.length())
        {
            string temp="";
            while(i<s.length() && s[i]!=' ')
            {
                temp+=s[i];
                i++;
            }
            int index=temp.back()-'0';
            temp.pop_back();
            st[index]=temp;
            i++;
        }

        string ans="";

        for(int i=0;i<10;i++)
        {
            if(st[i]!="")
            {
                if(!ans.empty())
                ans+=" ";

                ans+=st[i];
            }

        }
        return ans;
    }
};