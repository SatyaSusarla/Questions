#include <iostream>
#include <math.h>
using namespace std;
int binary(int n){
static int s=0;
if(n<=0){
return s;
}
static int i=0;
int r=n%2;
s=s+(r*pow(10,i));
i++;
binary(n/2);
}
int main(){
int n;
cout<<"enter number"<<endl;
cin>>n;
cout<<binary(n)<<endl;
return 0;
}