#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n,s,r;
cout<<"enter number"<<endl;
cin>>n;
int i=0;
s=0;
while(n>0){
r=n%10;
s=s+(r+1)*pow(10,i);
i=i+1;
n=n/10;
}
cout<<"new number is "<<s<<endl;
return 0;
}