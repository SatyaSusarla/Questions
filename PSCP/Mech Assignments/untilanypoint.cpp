#include <iostream>
using namespace std;
int main(){
int a,b,max,min;
cout<<"enter first value"<<endl;
cin>>a;
int ch;
max=a;
min=a;
do{
cout<<"do you to continue(1 or 0)"<<endl;
cin>>ch;
if(ch==0){
break;
}
cout<<"enter value"<<endl;
cin>>b;
if(max<b){
max=b;
}
else if(max==b || min==b){
continue;
}
else if(min>b){
min=b;
}
}
while(ch==1);
cout<<"maximum is "<<max<<endl;
cout<<"minimum is "<<min<<endl;
return 0;
}