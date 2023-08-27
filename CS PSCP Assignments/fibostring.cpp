#include <iostream>
#include <string.h>
using namespace std;
string fibo(int n){
    if(n==0){
        return "a";
    }
    if(n==1){
        return "bc";
    }
    return fibo(n-2)+fibo(n-1);
}
int main(){
    int n;
    cout<<"enter term number ";
    cin>>n;
   string s=fibo(n);
   cout<<s<<endl;
   int k;
   cout<<"enter the index ";
   cin>>k;
   cout<<s[k-1]<<endl;
   return 0;
}
