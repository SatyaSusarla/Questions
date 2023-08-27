#include <iostream>
using namespace std;
int main(){
int n,r;
int t=0;
int s=0;
int u=0;
cout<<"enter the number"<<endl;
cin>>n;
while(n>0){
r=n%10;
s=s+r;
n=n/10;
}
if(s%10>0){
while(s>0){
r=s%10;
t=t+r;
s=s/10;
}
}
else{
cout<<s<<endl;
}
if(t%10>0){
while(t>0){
r=t%10;
u=u+r;
t=t/10;
}
}
else{
cout<<t<<endl;
}
if(u>0){
cout<<u<<endl;
}
return 0;
}