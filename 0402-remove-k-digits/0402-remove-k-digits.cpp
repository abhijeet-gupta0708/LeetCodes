class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char>st;

        for(int i=0;i<num.length();i++)
        {
            while(!st.empty() && k>0 && num[i]-'0'<st.top()-'0')
            {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }

        while(k--)
        st.pop();

        string ans="";

        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        // Removing first 0 

        int i=0;

        while(i<ans.length() && ans[i]=='0')
        {
            i++;
        }
        ans=ans.substr(i);

        if(ans=="") return "0";

        return ans;
        
    }
};