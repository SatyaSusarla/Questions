class Solution {
public:
    int climbStairs(int n) {
       int a;
        a=0;
         int b=1;
        int c=2;
        int d=0;
        if(n==2){
            return c;
        }
        else if(n==1){
            return b;
        }
        for(int i=3;i<=n;i++){
            
            d=b+c;
            b=c;
            c=d;
        }
        return d;
    }
};