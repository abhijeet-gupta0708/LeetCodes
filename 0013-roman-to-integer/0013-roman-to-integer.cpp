class Solution {
public:
    int romanToInt(string s) {

        int ans=0;
        int size=s.length();
        vector<int>st(size,0);

        for(int i=0;i<size;i++)
        {
            if(s[i]=='I')
            st[i]=1;
           else  if(s[i]=='V')
            st[i]=5;
           else if(s[i]=='X')
            st[i]=10;
           else if(s[i]=='L')
            st[i]=50;
           else if(s[i]=='D')
            st[i]=500;
           else if(s[i]=='C')
            st[i]=100;
            else
            st[i]=1000;
        }
        int i=0;
        for(;i<size-1;i++)
        {
            if(st[i]<st[i+1])
            ans-=(st[i]);
            else
            ans+=st[i];
        }
        ans+=st[i];
        return ans;
    }
};