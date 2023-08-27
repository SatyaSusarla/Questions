#include <iostream>
using namespace std;
int i=0;
int loc;
int asc(int a[],int n,int start,int min){
if(min<n-1){
if(start<n-1){
    if(a[start]>a[start+1]){
        int temp=a[start];
        a[start]=a[start+1];
        a[start+1]=temp;
    }
    asc(a,n,start+1,min);
}
if(start=n-1){
    ++i;
    asc(a,n,min,min+1);
}
}
else{
    return 0;
}
}
int main(){
    int n;
    cout<<"enter the array size"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    asc(a,n,0,i);
    cout<<"the sorted array is"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}