#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
        int n;
    cout<<"enter the array size"<<endl;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" element"<<endl;
        cin>>a[i];
    }

    int m;
    cout<<"enter the array size"<<endl;
    cin>>m;

    int b[m];
    for(int i=0;i<m;i++){
        cout<<"enter "<<i<<" element"<<endl;
        cin>>b[i];
    }
int count=0;
for(int i=0;i<n;i++){
    if(a[i]==0){
        a[i]=b[count];
        count++;
    }
}
sort(a,a+n);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}