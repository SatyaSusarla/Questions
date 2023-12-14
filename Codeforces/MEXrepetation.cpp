#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
#include <climits>
#include <algorithm>
using namespace std;

int findFirstMissing(int a[],int n){
    int x=*max_element(a,a+n);
    int b[x+1];
    for(int i=0;i<=x;i++){
        b[i]=0;
    }
    for(int i=0;i<n;i++){
        b[a[i]]++;
    }
   /* for(int i=0;i<=x;i++){
        cout<<"b "<<b[i]<<" ";
    }
    cout<<endl;*/
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>max){
                max=a[i];
            }
        if(b[i]==0){
            /*cout<<i<<endl;*/
            return i;
        }
    }
    /*cout<<max+1<<endl;*/
    return max+1;
}
int main(){
int t;
cin>>t;
for(int l=0;l<t;l++){
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

for(int j=0;j<k;j++){
    for(int i=0;i<n;i++){
        a[i]=findFirstMissing(a,n);
        /*for(int i=0;i<n;i++){
    cout<<"a "<<a[i]<<" ";
}
cout<<endl;
*/
    }
}
 for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
}
    return 0;
    }
    
   