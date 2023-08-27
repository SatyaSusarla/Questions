#include <iostream>
using namespace std;
int facts(int n){
if(n<=0){
return 1;
}
int fact=n;
fact=fact*facts(n-1);
return fact;
}
int main(){
int n;
cout<<"enter number"<<endl;
cin>>n;
cout<<facts(n)<<endl;
return 0;
}