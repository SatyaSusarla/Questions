#include <iostream>
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
    
   int localmaxarr[n];
   int count=0;
   localmaxarr[count]=a[0];

    for(int i=1;i<n;i++){

        for(int j=0;j<=count;j++){
      if(a[i]<localmaxarr[j]){
        for(int k=j;k<=i;k++){
            a[k]=-1;
        }
      }
        }
    
      if(a[i]>localmaxarr[count]){
        count++;
        localmaxarr[count]=a[i];
        
      }
    }
       for(int i=0;i<n;i++){
    cout<<a[i]<<endl;
   }
    int store[2];
    for(int i=0;i<n;i++){
        if(a[i]==-1){
            store[1]=i;
            break;
        }
        else{
            store[1]=0;
        }
    }

      for(int i=n-1;i>=0;i--){
        if(a[i]==-1){
            store[2]=i;
            break;
        }
        else{
            store[2]=0;
        }
    }
   cout<<"the indexes needed to be changed are "<<store[1]<<" to "<<store[2]<<endl;
   return 0;
}