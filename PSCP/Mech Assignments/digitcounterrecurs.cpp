#include <iostream>
using namespace std;
int coutdigit(int n){
static int count=0;
if(n>0){
count++;
coutdigit(n/10);
}
else{
return count;
}
}
int main(){
int n;
cout<<"enter number"<<endl;
cin>>n;
cout<<coutdigit(n)<<endl;
return 0;
}