#include <iostream>
using namespace std;
int binary(int a[],int n,int i,int j,int search){
int start=i;
int end=j;
int mid=(start+end)/2;
if(a[mid]==search){
cout<<"found"<<endl;
return 0;
}
else if(start>end){
cout<<"not found"<<endl;
}
else if(search<a[mid]){
binary(a,n,i,mid-1,search);
}
else if(search>a[mid]){
binary(a,n,mid+1,j,search);
}
}
int main(){
int n;
int search;
cout<<"enter the size of array"<<endl;
cin>>n;
cout<<"enter element to be searched"<<endl;
cin>>search;
int a[n];
cout<<"enter the elements of the array"<<endl;
for(int k=0;k<n;k++){
cin>>a[k];
}
int i=0;
binary(a,n,i,n-1,search);
return 0;
}