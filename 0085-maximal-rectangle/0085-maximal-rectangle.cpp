 void findpsum(vector<vector<int>>&psum,vector<vector<char>>& matrix )
 {
    for(int j=0;j<matrix[0].size();j++)
    {
        int sum=0;
        for(int i=0;i<matrix.size();i++)
        {
            sum++;
            if(matrix[i][j]=='0') sum=0;
            psum[i][j]=sum;
        }
    }
 }

// FInding the Maxximum area;
int findarea(vector<int>& psum)
{
    int n=psum.size();
    stack<int>st;
    int left[n];
    int right[n];
    // Next smallest element

    for(int i=n-1;i>=0;i--)
    {
        while(!st.empty() && psum[st.top()]>=psum[i])
        st.pop();

        right[i]=st.empty() ?n :st.top();
        st.push(i);
    }
    while(!st.empty())
    st.pop();

    // Previous Element
    for(int i=0;i<n;i++)
    {
        while(!st.empty() && psum[st.top()]>=psum[i])
        st.pop();

        left[i]=st.empty() ?-1 :st.top();
        st.push(i);
    }


    int maxarea=INT_MIN;
    for(int i=0;i<n;i++)
    maxarea=max(maxarea,(psum[i]*(right[i]-left[i]-1)));

    return maxarea;

}
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {


        // Simple Problem hai ye bhai . Isme bas tumko prefix sum matrix nikalna hai jo ki taraverse ho from top to bottom aur height store kre . Uske baad simple maxximum area in rectangle of histogram laga do ,, simple;

        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<vector<int>> psum(rows, vector<int>(cols, 0));
         // Finding the psum 

         findpsum(psum,matrix);

         // Ab Hamko bas Largest area nikalna hai bas


         int maxarea=INT_MIN;
        for(int i=0;i<rows;i++)
         maxarea=max(maxarea,findarea(psum[i]));

         return maxarea;

        
    }
};