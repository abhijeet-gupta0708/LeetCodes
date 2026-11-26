class Solution {
public:
    bool canAliceWin(int n) {

        if (n==10) return true;
        if(n<10) return false;

        bool cond=false;
        int rem=n-10;
        int stone=9;
        while(true)
        {
            if(rem==stone) return cond;
            if(rem>stone)
            {
                rem-=stone;
                stone--;
                cond=!cond;
            }
            else return !cond;

        }
        return !cond;
    }
};