#include <iostream>
using namespace std;
int main(){
     int m;
    cout<<"enter the array size"<<endl;
    cin>>m;

    int a[m];
    for(int i=0;i<m;i++){
        cout<<"enter "<<i<<" element"<<endl;
        cin>>a[i];
    }
    
     int n;
    cout<<"enter the array size"<<endl;
    cin>>n;

    int b[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" element"<<endl;
        cin>>b[i];
    }
int fake=m;
    for(int i=0;i<n;i++){
        for(int j=0;j<fake;j++){
            if(a[j]==b[i]){
             for(int k=j;k<m-1;k++){
                int temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
             }
              fake--;
                break;     
            }
           
        }
    }
     
        for(int i=0;i<fake;i++){
            cout<<a[i]<<endl;
        }
        return 0;
    }
