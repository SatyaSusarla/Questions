#include <iostream>
#include <string.h>
using namespace std;
struct random{
char name[10];
int accno;
float balance;
};
void struc(random);
void struc1(random);
int main(){
int n;
cout<<"enter number of people"<<endl;
cin>>n;
random s[n];
for(int i=0;i<n;i++){
cout<<"enter student name"<<endl;
cin>>s[i].name;
cout<<"enter accno"<<endl;
cin>>s[i].accno;
cout<<"enter balance"<<endl;
cin>>s[i].balance;
}
cout<<"people with balance less than 200 are"<<endl;
for(int i=0;i<n;i++){
struc(s[i]);
}
cout<<"incremented value for people with more than 1000 balance"<<endl;
for(int i=0;i<n;i++){
struc1(s[i]);
}
return 0;
}
void struc(struct random s){
if(s.balance<200){
cout<<s.name<<endl;
}
}
void struc1(struct random s){
if(s.balance>1000){
s.balance=s.balance+100;
cout<<s.balance<<endl;
}
}