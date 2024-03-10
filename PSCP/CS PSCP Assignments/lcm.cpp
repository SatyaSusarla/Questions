#include <iostream>
using namespace std;
int main(){
    int a,b,temp;
    cout<<"enter the numbers "<<endl;
    cin>>a>>b;
    int flag=0;
    int lcm=a*b;
    int tempa=a;
    int tempb=b;
    if(a>b){
       temp=a/b;
    b=b*temp;
    }
    else{
        temp=b/a;
        a=a*temp;
    }
    while(a<=lcm || b<=lcm){
        if(a==b){
            cout<<"lcm is "<<a<<endl;
            flag=1;
            break;
        }
      if(a>b){
        b=b+tempb;
              }
      else {
        a=a+tempa;
      }
     
    }
    if(flag==0){
    cout<<"the lcm is "<<lcm<<endl;
    }
    return 0;
}