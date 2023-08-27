#include <iostream>
using namespace std;
int main(){

int n,m,i,j;
cout<<"enter rows and columns"<<endl;
cin>>n>>m;
int a[n][m];
for(i=0;i<n;i++){
for(j=0;j<m;j++){
    cout<<"enter the term"<<endl;
cin>>a[i][j];
}
}
for(i=0;i<n;i++){
int sum=0;
for(j=0;j<m;j++){
sum=sum+ a[i][j];
}
cout<<"sum of "<<i<<" th row is "<<sum<<endl;
}
for(j=0;j<m;j++){
int sum1=0;
for(i=0;i<n;i++){
sum1=sum1+a[i][j];
}
cout<<"sum of "<<j<<" th column is "<<sum1<<endl;
}
return 0;
}