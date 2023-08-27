#include <iostream>
using namespace std;
float power(float n,int p){
    if(p<=1){
        return n;
    }
    else{
        return n*power(n,p-1);
    }
}

int main(){
    float n;
    int p;
    cout<<"enter the number and power ";
    cin>>n>>p;
    cout<<"value is "<<power(n,p);
    return 0;
}
