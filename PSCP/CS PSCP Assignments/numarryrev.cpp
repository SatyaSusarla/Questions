#include <iostream>
using namespace std;
int sum=0;
int arrayelemrev(int n){
if(n>0){
    int r=n%10;
    sum=sum*10+r;
    arrayelemrev(n/10);
}
return sum;
}
int arrayrev(int a[],int n,int ksg){
if(ksg>n/2){
    return 0;
}
    int temp=arrayelemrev(a[ksg]);
    sum=0;
    a[ksg]=arrayelemrev(a[n-ksg-1]);
    sum=0;
    a[n-ksg-1]=temp;
    arrayrev(a,n,ksg+1);
}

int main(){
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    arrayrev(a,n,0);
    cout<<"new elements are"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}