#include <iostream>
using namespace std;
int main(){

int n;
int x,y;
int l=0;
cout<<"enter number of elements"<<endl;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cout<<"enter "<<i+1<<" term"<<endl;
cin>>a[i];
}
for(int j=0;j<n;j++){
int m=a[j];
x=0;
for (int k=0;k<n;k++){
if(m==a[k]){
x++;
}
if(x>l){
l=x;
y=a[k];
}
}
}
cout<<y<<" is repeated for "<<l<<" times"<<endl;
return 0;
}