#include <iostream>
using namespace std;
int i=0;
int hailstone(int n){
    if(n==1){
        ++i;
        cout<<endl;
       cout<<"repeat is "<<i<<endl;
       return 0;
    }
    if(n%2==0){
      
        cout<<n/2<<" ";
        ++i;
        hailstone(n/2);
    }
    if(n%2!=0){
        
        cout<<3*n+1<<" ";
        ++i;
        hailstone(3*n+1);
    }
}


int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    cout<<n<<" ";
    hailstone(n);
    return 0;
}
