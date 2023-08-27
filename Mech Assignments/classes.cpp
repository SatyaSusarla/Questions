#include <iostream>
using namespace std;
class employee{
public:
int salary,workh;
void AddWork();
void getInfo( ){
cout<<"enter the salary"<<endl;
cin>>salary;
cout<<"enter the working hours"<<endl;
cin>>workh;
}
void AddSal(){
getInfo();
if(salary<500){
salary+=10;
}
AddWork();
}
};
void employee::AddWork(){
if(workh>6){
salary+=5;
}
}
int main(){
employee a;
a.AddSal();
cout<<"the final salary is "<<a.salary<<endl;
return 0;
}