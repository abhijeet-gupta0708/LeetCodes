class Solution {
public:
    vector<string> removeComments(vector<string>& source) {

        vector<string>ans;
            bool cond=false;
            string temp="";
        for(int j=0;j<source.size();j++)
        {
            int n=source[j].length();

            for(int i=0;i<n;i++)
            {
                // AB HUm solver krenege 
                // Sabse phele Assume kro ki Multi line comment ke anadr hai 

                if(cond)
                {
                    if(i+1<n &&  source[j][i]=='*' && source[j][i+1]=='/')
                 { cond=false;
                    i++;}
                }
                else
                {
                    // Deal krete hai DOuble waale se 

                    if(i+1<n && ( source[j][i]=='/' && source[j][i+1]=='/'))
                    break;

                    else if (i+1<n && ( source[j][i]=='/' && source[j][i+1]=='*'))
                   { cond=true;
                    i++;
                   }

                    else
                    temp+=source[j][i];

                }
            }
            if(!cond && !temp.empty())
            {ans.push_back(temp);
            temp="";
            }
        }
        return ans;
    }
};