#include <iostream>
using namespace std;
int main(){
int a,b,i,j;
int flag;
cout<<"enter a and b"<<endl;
cin>>a>>b;
for(i=a;i<=b;i++){
flag=0;
for(j=2;j<=i/2;j++){
if(i%j==0){
flag=1;
break;
}
else{
continue;
}
}
if(flag==0){
cout<<"prime numbers are "<<i<<endl;
}
}
return 0;
}