class Solution {
public:
    string largestOddNumber(string num) {

        string temp="";

        for(int i=num.size()-1;i>=0;i--)
        {
            if((num[i]-'0')%2==1)
            {
                temp=num.substr(0,i+1);
            break;}
            
        }
       return temp; 
    }
};