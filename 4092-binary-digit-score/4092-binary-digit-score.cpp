string to_binary(int x)
{
    string ans="";

    while(x)
    {
        int rem=x%2;
        ans+=to_string(rem);
        x/=2;
    }
    reverse(ans.begin(),ans.end());

    return ans;
}

int count_bits(string s)
{
    int count = 0;

    for(char ch : s)
    {
        if(ch == '1')
            count++;
    }

    return count;
}
class Solution {
public:
    int calculateScore(int a, int b) {

        // converting the numbers into binary

        string ans1=to_binary(a);
        string ans2=to_binary(b);

        // Count the set bits 

        int s1=count_bits(ans1);
        int s2=count_bits(ans2);

        int ans;
        if(s1>=s2)
        {
            ans=s1*s2;
        }
        else
        ans=s2/s1;

        return ans;
        
    }
};