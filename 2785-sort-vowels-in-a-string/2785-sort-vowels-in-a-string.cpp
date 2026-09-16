class Solution {
public:
    string sortVowels(string s) {

        vector<int>lower(26,0);
        vector<int>upper(26,0);
            int i=0;
        while(i<s.length())
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
           { 
            lower[s[i]-'a']++;
            s[i]='#';
            }
            if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
            
            {
                (upper[s[i]-'A'])++;
            s[i]='#';
            }

            i++;
         }

         // Now sorting vowel 
         string ans="";
         for(int i=0;i<26;i++)
         {
            char ch='A'+i;
            while(upper[i]!=0)
            {
                ans+=ch;
                upper[i]--;
            }
         }
         for(int i=0;i<26;i++)
         {
            char ch='a'+i;
            while(lower[i]!=0)
            {
                ans+=ch;
                lower[i]--;
            }
         }
        // now changing the string 

        i=0;
        int j=0;
        while(i<s.length())
        {
            if(s[i]=='#')
            {
                s[i]=ans[j];
                j++;
            }
            i++;
        }
        return s;
    }
};