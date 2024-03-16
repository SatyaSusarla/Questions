#include <iostream>
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n-1;i++){
        if(a[i-1]<=0){
            continue;
        }
        else{
            a[i]-=2*a[i-1];
            a[i+1]-=a[i-1];
            a[i-1]=0;
        }
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            cout<<"NO"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<"YES"<<endl;
    }
}
return 0;
}