#include <iostream>
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int findFirstMissing(int a[], 
                    int n)
{
    int zeroflag=0;
    int rptflg=0;
    int x=a[0];
   for(int i=0;i<n-1;i++){
        if(a[i]==0){
        zeroflag=1;
       }
       if(a[i]+1==a[i+1]){
            int rptflg=1;
           continue;
       }
     
       else{
            int rptflg=0;
          x=a[i]+1;
          break;
       }
   }
 
if(rptflg==1){
    x=a[n-1]+1;
}
if(zeroflag=0){
    x=0;
}
  cout<<endl<<x<<endl;
   return x;
}
int main(){
int n,k;
cin>>n>>k;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<k;i++){
    for(int i=0;i<n;i++){
        if(n==1){
       if(a[0]!=0){
        a[0]=0;
        }
    else{
        a[0]=a[0]+1;
    }
}
        int xv[n];
        int count=0;
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            else{
                xv[count]=a[j];
                count++;
            }
        }
        for(int i=0;i<count;i++){
            cout<<xv[i]<<" ";
        }
        sort(xv,xv+count);
        a[i]=findFirstMissing(xv,count);
    }
}
 for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
    return 0;
    }
    
   