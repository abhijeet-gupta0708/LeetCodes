class Solution {
public:
    string makeGood(string s) {

        if(s.length()==0) return "";
        int n=s.length();

        stack<char>st;
       int i=0;
       while(i<n)
       {
       //  int j=i+1;
        if(!st.empty()  && abs(st.top()-s[i])==32)
        st.pop();

        else
        st.push(s[i]);

        i++;

       }

       string ans="";
       while(!st.empty()) 
       {
        ans+=st.top();
        st.pop();
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};