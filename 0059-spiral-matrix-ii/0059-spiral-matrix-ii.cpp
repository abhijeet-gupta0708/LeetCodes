class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> temp(n,vector<int>(n,0));
        int c=1;
        int row=n;
        int col=n;
        int top=0,left=0,right=n-1,bottom=n-1;
        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                temp[top][i]=c++;
            }
            top++;

            for(int i=top;i<=bottom;i++)
            {
                temp[i][right]=c++;
            }
            right--;

            if(top<=bottom)
            {
                for(int i=right;i>=left;i--)
                {
                    temp[bottom][i]=c++;
                }
                    bottom--;
            }
            if(left<=right)
            {
                for(int i=bottom;i>=top;i--)
                {
                    temp[i][left]=c++;
                }
                    left++;
            }
        }

       
        return temp;
    }
};