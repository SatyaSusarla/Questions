#include <iostream>
using namespace std;
class complex{
    public:
float real;
float imaginary;
public:
void set(float a,float b){
    real=a;
    imaginary=b;
}
void sumd(float a,float b,float c,float d){
       real=a+b;
       imaginary=c+d;
    }

public:
void display(){
cout<<real<<" + "<<imaginary<<"*i "<<endl;
}
};

 

int main(){
    complex c[2];
    c[0].set(1,2);
    c[1].set(2,3);
    cout<<"enter sum of which classes you want"<<endl;
    int i,j;
    cin>>i;
    cin>>j;
      c[2].sumd(c[i-1].real,c[j-1].real,c[i-1].imaginary,c[j-1].imaginary);
           for(int i=0;i<3;i++){
        c[i].display();
    }
return 0;
}


