#include <iostream>
#include <string.h>
using namespace std;
int main(){
char s[100];
cout<<"enter the string"<<endl;
cin.getline(s,100);
char s1[100];
int flag=0;
int l=0;
cout<<"enter the substring"<<endl;
cin.getline(s1,100);
for(int i=0;i<strlen(s);i++){
if(s[i]==s1[l]){
for(int j=0;j<strlen(s1);j++){
if(s[i+j]!=s1[j]){
flag=1;
}
}
if(flag==0){
cout<<"element is at "<<i<<" th index"<<endl;
}
}
}
return 0;
}