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

    for(int i=0;i<n;i++){
        int flag=1;
        for(int j=i;j<n;j++){
            if(a[i]<a[j]){
              flag=0;
            }
        }
        if(flag==1){
            cout<<a[i]<<" ";
        }
    }
    return 0;
}