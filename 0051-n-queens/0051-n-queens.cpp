class Solution {
public:
    bool issafe(vector<string>&board,vector<vector<string>>&ans,int n,int row,int j)
    {
        // Vertical checking
        for(int i=0;i<row;i++)
        {
            if(board[i][j]=='Q')
            return false;
        }
       
        // Left Diagonal 
        for(int i=row-1,k=j-1 ;k>=0&& i>=0;i--,k--)
        {
            if(board[i][k]=='Q')
            return false;

        }
        //RIght Diagonal
        for(int i=row-1,k=j+1 ;k<n&& i>=0;i--,k++)
        {
            if(board[i][k]=='Q')
            return false;

        }
        return true;
    }
    void print(vector<string>&board,vector<vector<string>>&ans,int n,int row)
    {
        if (row==n) 
        {
            ans.push_back(board);
            return ;
        }

        for(int i=0;i<n;i++)
        {
            if(issafe(board,ans,n,row,i))
            {
                board[row][i]='Q';
                print(board,ans,n,row+1);
                board[row][i]='.';

            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>>ans;
        vector<string>board(n,string(n,'.'));

        print(board,ans,n,0);
        return ans;

        
    }
};