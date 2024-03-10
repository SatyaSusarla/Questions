#include <iostream>
using namespace std;
int main(){
int n,m,i,j;
int flag=0;
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
for(j=0;j<m;j++){
if(a[i][j]==a[j][i]){
flag=1;
continue;
}
else{
flag=0;
break;
}
}
if(flag==0){
break;
}
}
if(flag==1){
cout<<"symmetric matrix"<<endl;
}
else{
cout<<"unsymmetric matrix"<<endl;
}
return 0;
}