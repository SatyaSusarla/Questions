#include <iostream>
#include <vector>
using namespace std;

// top down approach of breaking big problem into smaller sub problems
int fib(int n , vector<int> &dp){
if(n<=1){
        return n;
    }
 if(dp[n]!=-1){
        return dp[n];
    }
    dp[n]=fib(n-1, dp)+fib(n-2, dp);
    return dp[n];
}

// bottom up approach
int tabulation(int n, vector<int> &dpp){
  dpp[0]=0;
  dpp[1]=1;
  for(int i=2;i<=n;i++)
  dpp[i]=dpp[i-2]+dpp[i-1];

return dpp[n];
}


int main(){
int n;
cin>>n;

vector<int> fibo(n+1);
for(int i=0;i<=n ; i++)
fibo[i]=-1;

cout<<fib(n,fibo)<<endl;
cout<<tabulation(n,fibo)<<endl;

return 0;
}