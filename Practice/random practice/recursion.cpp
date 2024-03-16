#include <iostream>
using namespace std;

int power(int n,int p){
    if(p==0){
        return 1;
    }
    return n*power(n,p-1);
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int fib(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
    return 1;
    }
    return fib(n-1)+fib(n-2);

}

void reversestring(char a[], int n){
 if(n==0){
    return;
 }
 cout<<a[n-1];
 reversestring(a,n-1);
}
int main(){
    cout<<power(4,3)<<endl;
    cout<<factorial(4)<<endl;
    cout<<fib(4)<<endl;
    reversestring("binod",5);
return 0;
}