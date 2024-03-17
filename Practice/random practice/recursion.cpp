#include <iostream>
using namespace std;

int maze(int n, int i, int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n ){
        return 0;
    }
    return maze(n,i+1,j)+maze(n,i,j+1);
}
int power(int n,int p){
    if(p==0){
        return 1;
    }
    return n*power(n,p-1);
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
    return 1;
    }
    return fib(n-1)+fib(n-2);

}

void reversestring(char a[], int n){
 if(n==0){
    return;
 }
 cout<<a[n-1];
 reversestring(a,n-1);
}

void prntsubs(string s, string ans){
    if (s.length()==0){
        cout<<ans<<endl;
        return;
    }
     char ch = s[0];
     string ros= s.substr(1);
     prntsubs(ros, ans);
     prntsubs(ros, ans+ch);
}

void prntprmutations(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        prntprmutations(ros,ans+ch);
    }

}
int zerooneknapsack(int value[], int wt[], int n, int w){
    if(n==0 || w==0){
        return 0;
    }
    if(wt[n-1]>w){
       return zerooneknapsack(value, wt ,n-1,w);
}
    
   return max(zerooneknapsack(value,wt, n-1, w-wt[n-1])+value[n-1], zerooneknapsack(value, wt ,n-1,w));
}
int main(){
    cout<<maze(3,0,0)<<endl;
return 0;
}