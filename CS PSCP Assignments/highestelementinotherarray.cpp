#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter number of elements"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" element"<<endl;
        cin>>a[i];
    }
    int j;
    int b[n];
    int bcount=0;
    for(int i=0;i<n;i++){
        int max=a[0];
        int loc=0;
        for(j=0;j<n;j++){
            if(a[j]>max){
                max=a[j];
                loc=j;
            }
        }
        a[loc]=-100000;
        b[bcount]=max;
        bcount++;
    }
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
        
    }
    return 0;
}