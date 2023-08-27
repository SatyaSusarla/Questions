#include <iostream>
using namespace std;
int main(){
    int n;
cout<<"enter number of elements in the array "<<endl;
cin>>n;
int sum[n];
sum[0]=0;
int a[n];
for(int i=0;i<n;i++){
cout<<"enter "<<i<<" term"<<endl;
cin>>a[i];
if(i>0){
sum[i]=sum[i-1]+a[i];
}
else{
sum[i]=a[i];
}
}
for(int j=0;j<n;j++){
cout<<sum[j]<<endl;
}
return 0;
}