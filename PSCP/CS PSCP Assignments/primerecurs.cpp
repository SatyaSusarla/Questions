#include <iostream>
using namespace std;
int prime(int n,int temp){

if(temp<=1){
    cout<<n<<endl;
    return 0;
}

if(n%temp==0){
    return 0;
}

prime(n,--temp);
}


int fun(int n){
    if(n==1){
        return 0;
    }
    prime(n,n/2);
    fun(--n);
}

int main(){
    int n;
    cout<<"enter the number until which prime numbers are needed "<<endl;
    cin>>n;
    fun(n);
    return 0;
}