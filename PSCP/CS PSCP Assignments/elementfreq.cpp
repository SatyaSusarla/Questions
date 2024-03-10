#include <iostream>
using namespace std;
int mod=1000000000;

int main(){
         int n;
    cout<<"enter the array size"<<endl;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" element"<<endl;
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        int freq=0;
         if(a[i]==mod){
                continue;
            }
        int check=a[i];
        for(int j=0;j<n;j++){
           
         if(j==i){
            continue;
         }
         else{
            if(a[j]==check){
                freq++;
                a[j]=mod;
            }
         }
        }
        cout<<"frequency of "<<a[i]<<" is "<<freq+1<<endl;
    }
    return 0;
}