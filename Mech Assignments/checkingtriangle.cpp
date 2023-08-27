#include <iostream>
using namespace std;
void triangle(int a,int b,int c){
if(a+b+c==180){
if(a==b && b==c && c==a){
cout<<"triangle is equilateral"<<endl;
}
else if(a!=b && b!=c && c!=a){
cout<<"triangle is scalene"<<endl;
}
else if(a==b || b==c || c==a){
cout<<"triangle is isoceles"<<endl;
}

if(a==90 || b==90 || c==90){
cout<<"triangle is right angled"<<endl;
}
}
else{
cout<<"given angles do not form a triangle"<<endl;
}
}
int main(){
int a,b,c;
cout<<"enter the angles"<<endl;
cin>>a>>b>>c;
triangle(a,b,c);
return 0;
}