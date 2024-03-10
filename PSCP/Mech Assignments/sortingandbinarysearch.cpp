#include <iostream>
using namespace std;
int bsearch(int b[],int n){
int k;
cout<<"enter number to search"<<endl;
cin>>k;
int start=0;
int end=n-1;
int mid=(start+end)/2;
while(start<=end){
if(b[mid]==k){
cout<<"found"<<endl;
break;
}
else if(k<b[mid]){
end=mid-1;
}
else{
start=mid+1;
}
mid=(start+end)/2;
if(start>end){
cout<<"not found"<<endl;
}
}
}
int main(){
int n;
cout<<"enter array size"<<endl;
cin>>n;
int a[n];
int b[n];
for(int i=0;i<n;i++){
cout<<"enter "<<i+1<<" term"<<endl;
cin>>a[i];
}
for(int i=0;i<n-1;i++){
for(int j=0;j<n-1-i;j++){
if(a[j]>a[j+1]){
int c=a[j];
a[j]=a[j+1];
a[j+1]=c;
}
}
}
cout<<"sorted array is"<<endl;
for(int k=0;k<n;k++){
cout<<a[k]<<endl;
}
cout<<"binary search"<<endl;
bsearch(a,n);
return 0;
}