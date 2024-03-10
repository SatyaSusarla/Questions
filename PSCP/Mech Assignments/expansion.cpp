#include <iostream>
#include <math.h>
using namespace std;
int main(){
int i,j,x,n;
float term;
cout<<"enter x"<<endl;
cin>>x;
cout<<"enter number of terms"<<endl;
cin>>n;
int sign=1;
float sum=0;
for(i=1;i<2*n;i=i+2){
int fact=1;
for(j=1;j<=i;j++){
fact=fact*j;
}
term=pow(x,i)/fact;
sum=sum+(term*sign);
sign=sign*(
1);
}
cout<<"x= "<<sum<<endl;
return 0;
}