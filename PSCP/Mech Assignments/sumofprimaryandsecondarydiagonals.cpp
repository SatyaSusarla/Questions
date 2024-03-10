#include <iostream>
using namespace std;
int main(){

int n,m,i,j;
int flag=0;
int sum=0;
int sum1=0;
cout<<"enter rows and columns"<<endl;
cin>>n;
int a[n][n];
for(i=0;i<n;i++){
for(j=0;j<n;j++){
    cout<<"enter the term"<<endl;
cin>>a[i][j];
}
}
for(i=0;i<n;i++){
sum=sum+a[i][i];
}
cout<<"diagonal elemnts sum is "<<sum<<endl;
for(i=1;i<=n;i++){
sum1=sum1+a[i-1][n-i];
}
cout<<"secondary diagonal elements sum is "<<sum1<<endl;
return 0;
}