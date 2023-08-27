#include <iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter the numbers "<<endl;
    cin>>a>>b;
    int gcd=1;
    if(a>b){
        temp=a/2;
    }
    else{
        temp=b/2;
    }
    while(temp>1){
        if(a%temp==0 && b%temp==0){
            gcd=temp;
            break;
        }
        else{
            temp=temp-1;
        }
    }
    cout<<"the gcd is "<<gcd<<endl;
    return 0;
}