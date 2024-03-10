#include <iostream>
using namespace std;
int main(){
int l,n,r,s,j,k,p,m,x;
cout<<"enter number"<<endl;
cin>>l;
cout<<"second number"<<endl;
cin>>m;
for(k=l;k<=m;k++){
x=k;
p=0;
for(j=k;j>0;j=j/10){
s=1;
r=j%10;
for(int i=1;i<=r;i++){
s=s*i;
}
p=p+s;
}
if(p==x){
cout<<k<<" "<<endl;
}
}
return 0;
}