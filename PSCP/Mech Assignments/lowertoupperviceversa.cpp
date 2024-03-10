#include <iostream>
#include <string.h>
using namespace std;
void uppercase(char s[]){
int n;
cout<<" enter 1 for upper case and 2 for lower case "<<endl;
cin>>n;
switch(n){
case 1:
for(int i=0;i<strlen(s);i++){
if(s[i]>='a'&&s[i]<='z'){
s[i]=s[i]-32;
}
}
for(int i=0;i<strlen(s);i++){
cout<<s[i];
}
break;
case 2:
for(int i=0;i<strlen(s);i++){
if(s[i]>='A'&&s[i]<='Z'){
s[i]=s[i]+32;
}
}
for(int i=0;i<strlen(s);i++){
cout<<s[i];
}
break;
default:
cout<<"error"<<endl;
}
}
int main(){
char s[100];
cout<<"enter the string"<<endl;
cin.getline(s,100);
uppercase(s);
return 0;
}