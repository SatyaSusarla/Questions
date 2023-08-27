#include <iostream>
using namespace std;
struct employee{
char name[100];
int id;
float salary;
};
int main(){
employee y1;
cout<<"enter employees name"<<endl;
cin.getline(y1.name,100);
cout<<"enter employee ID"<<endl;
cin>>y1.id;
cout<<"enter salary"<<endl;
cin>>y1.salary;
cout<<"enter employees name "<<y1.name<<endl;
cout<<"enter employee ID "<<y1.id<<endl;
cout<<"enter salary "<<y1.salary<<endl;
return 0;
}