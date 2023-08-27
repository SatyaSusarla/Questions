#include<iostream>
using namespace std;
int main(){
int n,i,j;
cout<<"enter rows"<<endl;
cin>>n;
for(i=1;i<n;i++){
for(j=65;j<65+i;j++)
{
cout<<char(j)<<" ";
}
cout<<endl;
}
for(i=n;i>=1;i--){
for(j=65;j<65+i;j++)
{
cout<<char(j)<<" ";
}
cout<<endl;
}
return 0;
}