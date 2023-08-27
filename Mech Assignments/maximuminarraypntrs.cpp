#include <iostream>
using namespace std;
int max(double *ptr,int n){
double *ptr1;
if(n==0){
ptr1=NULL;
return *ptr1;
}
ptr1=ptr;
for(int i=0;i<n;i++){
    if(*(ptr+i)>*ptr1){
*ptr1=*(ptr+i);
}
}
return *ptr1;
}
int main(){
int n;
cout<<"enter number of elements in the array"<<endl;
cin>>n;
double arr[n];
cout<<"enter the elements of the array"<<endl;
for(int i=0;i<n;i++){
cin>>arr[i];
}
cout<<endl<<max(arr,n);
return 0;
}