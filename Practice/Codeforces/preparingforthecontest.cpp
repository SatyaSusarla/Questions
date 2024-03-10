#include <iostream>
using namespace std;
 
 
int main(){
    int t;
    cin>>t;
    for(int l=0;l<t;l++){
    int n,k;
    cin>>n>>k;
    int a[n];
   /* for(int i=0;i<n;i++){
        a[i]=i+1;
    }
    */
    int cons=1;
    int i;
    if(k==0){
         for(int i=0;i<n;i++){
        a[i]=n-i;
    }
    }
    else if(k==1){
        for(int i=0;i<n;i++){
        a[i]=n-i;
    }
    swap(a[0],a[1]);
    }
    else{
    for(i=1;i<=k;i++){
        a[i-1]=cons;
        cons++;
    }
    cons=0;
    for(int s=i-1;s<n;s++){
        a[s]=(n-cons);
        cons++;
    }
    }
     for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    }
 return 0;
    
}
