class Solution {
public:
    string minWindow(string s, string t) {

        if(t.size()>s.size()) return "";
       
        
        unordered_map<char,int>hash;
        for(int i=0;i<t.size();i++)
        hash[t[i]]++;

        int m=t.size();
        int left=0,right=0,sindex=-1,len=INT_MAX,count=0;
        while(right<s.length())
        {
            //Sabse aphele Insert kro 
            if(hash[s[right]]>0)
            count++;
            hash[s[right]]--;

            // Now Check 
            while(count==m)
            {
                if((right-left+1)<len)
                {
                    len=right-left+1;
                    sindex=left;
                }
                    hash[s[left]]++;

                    if(hash[s[left]]>0)
                    count--;

                  left++;  

            }
            right++;

        }
        return len==INT_MAX?"":s.substr(sindex,len);
    }
};