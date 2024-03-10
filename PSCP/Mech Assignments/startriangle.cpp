#include <iostream>
using namespace std;
int main(){
int n;
int i,s,j;
cout<<"enter number of rows"<<endl;
cin>>n;
for(i=1;i<=n;i++){
for(s=1;s<=2*(n-i);s++){
cout<<" ";
}
for(j=1;j<=2*i-1;j++){
cout<<"*"<<" ";
}
cout<<endl;
}
return 0;
}