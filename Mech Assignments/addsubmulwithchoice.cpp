#include <iostream>
using namespace std;
int small(int a,int b,int c,int d,int e){
int min=a;
int x[5]={a,b,c,d,e};
for(int i=0;i<5;i++){
if(min>x[i]){
min=x[i];
}
}
return min;
}
int big(int a,int b,int c,int d,int e){
int max=a;
int x[5]={a,b,c,d,e};
for(int i=0;i<5;i++){
if(max<x[i]){
max=x[i];
}
}
return max;
}
void sumavg(int a,int b,int c,int d,int e){
int f;
cout<<"enter choice 1.sum 2.average"<<endl;
cin>>f;
int sum=a+b+c+d+e;
if(f==1){
cout<<"sum is "<<sum<<endl;
}
if(f==2){
int avg=sum/5;
cout<<"average is "<<avg<<endl;
}
else{
cout<<"invalid"<<endl;
}
}
int main(){
int a,b,c,d,e;
cout<<"enter 5 numbers"<<endl;
cin>>a>>b>>c>>d>>e;
int choice;
cout<<"enter choice 1.smallest 2.largest 3.sum or average"<<endl;
cin>>choice;
switch(choice){
case 1:cout<<"smallest is "<<small(a,b,c,d,e)<<endl;
break;
case 2:cout<<"biggest is "<<big(a,b,c,d,e)<<endl;
break;
case 3:sumavg(a,b,c,d,e);
break;
default:cout<<"input is invalid "<<endl;
break;
}
return 0;
}