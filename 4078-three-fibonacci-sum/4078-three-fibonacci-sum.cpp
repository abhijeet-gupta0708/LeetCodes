class Solution {
public:
    bool threeFibonacciSum(int n) {

        int a=0,b=1,c=1;

        while(a+b+c <n)
        {
            long long sum=b+c;
            a=b;
            b=c;
            c=sum;
        }

        return (a+b+c==n);        
    }
};