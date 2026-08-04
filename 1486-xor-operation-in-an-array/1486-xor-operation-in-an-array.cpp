int initialxor (int n)
{
    int ans;
    if(n%4==0) return n;
    if(n%4==1) return 1;
    if(n%4==2) return n+1;
    return 0;
}
class Solution {
public:
    int xorOperation(int n, int start) {

        vector<int>nums(n);
        int ans1=0;
        for(int i=0;i<n;i++)
        {
            ans1=ans1^(start+(i*2));
        }

       
        return ans1;
        
    }
};