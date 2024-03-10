#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
cout<<"enter number"<<endl;
cin>>n;
int r;
int sum=0;
int i=0;
while(n>0){
r=n%2;
sum=sum+(pow(10,i)*r);
n=n/2;
i++;
}
cout<<sum<<endl;
int d=0;
int e=0;
while(sum>0){
if(sum%10==0){
d=d+1;
}
else{
e=e+1;
}
sum=sum/10;
}
cout<<"1's are "<<e<<endl;
cout<<"0's are "<<d<<endl;
return 0;
}