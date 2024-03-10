#include <iostream>
using namespace std;
class area{
int length,breath;
public:
void setdim(int a,int b){
length=a;
breath=b;
}
void getarea();
};
void area::getarea(){
cout<<"area of rectangle is ";
cout<<(length*breath)<<endl;
}
int main(){
int a1,b;
cout<<"enter the length"<<endl;
cin>>a1;
cout<<"enter the breath"<<endl;
cin>>b;
area a;
a.setdim(a1,b);
a.getarea();
return 0;
}