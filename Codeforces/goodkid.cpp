#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
    int n;
    cin>>n;
    int a[n];
    int maxindex=0;
    int minindex=0;;
       int max;
       int min;
    
    for(int i=0;i<n;i++){
        if(i==0){
            cin>>a[i];
            max=a[i];
            min=a[i];
            continue;
        }
        cin>>a[i];
        if(a[i]>a[maxindex]){
            max=a[i];
            maxindex=i;
        }
        else if(a[i]<a[minindex]){
            min=a[i];
            minindex=i;
        }
    }
    int product1=1;
    for(int k=0;k<n;k++){
        if(k==minindex){
            product1=product1*(min+1);
        }
        else{
            product1=product1*a[k];
        }
    }
    int product2=1;
      for(int i=0;i<n;i++){
        if(i==maxindex){
            product2=product2*(max+1);
        }
        else{
            product2=product2*a[i];
        }
    }
    if(product1>product2){
        cout<<product1<<endl;
    }
    else{
        cout<<product2<<endl;
    }
    }
    return 0;
}