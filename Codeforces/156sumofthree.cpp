#include <iostream>
using namespace std;
 
int main(){
    int x;
    cin>>x;
    for(int i=0;i<x;i++){
    int n;
    cin>>n;
    int a[100];
    int flg;
    for(int i=1;i<n;i++){
        flg=0;
        int temp=n;
          int total=n;
        if(i%3==0){
            continue;
        }
        temp=temp-i;
        a[0]=i;
        for(int j=1;j<temp;j++){
            if(j%3==0 || j==i){
            continue;
        }
        temp=temp-j;
        a[1]=j;
        if(temp%3!=0 && temp!=i && temp!=j && temp+i+j==total){
            a[2]=temp;
            cout<<"YES"<<endl;
            cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
              flg=1;
            break;
          
        }
        
        }
        if(flg==1){
            break;
        }
    }
    if(flg!=1){
    cout<<"NO"<<endl;
    }
    }
    return 0;
    
}