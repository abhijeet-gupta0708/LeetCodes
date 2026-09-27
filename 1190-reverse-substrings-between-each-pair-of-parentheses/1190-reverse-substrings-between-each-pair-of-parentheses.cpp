class Solution {
public:
    string reverseParentheses(string s) {

        int n=s.length();
        string result="";
        vector<int>len;
        int j=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                len.push_back(result.length());
            }

            else if(s[i]==')')
            {
                 int start = len.back();
                len.pop_back();
                reverse(result.begin()+start,result.end());
                j++;
            }
            else 
            result+=s[i];
        }
        return result;
    }
};