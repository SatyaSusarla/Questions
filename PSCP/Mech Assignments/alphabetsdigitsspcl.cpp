#include <iostream>
#include <string.h>
using namespace std;
int main(){
char s[100];
cout<<"enter string"<<endl;
cin.getline(s,100);
int c=0;
int d=0;
int e=0;
for(int i=0;i<strlen(s);i++){
if(isalpha(s[i])){
c++;
continue;
}
if(isdigit(s[i])){
d++;
continue;
}
if(isspace(s[i])){
e++;
continue;
}
}
cout<<"alphabets are "<<c<<endl;
cout<<"digits are "<<d<<endl;
cout<<"special charecters are "<<(strlen(s)-c-d-e)<<endl;
return 0;
}