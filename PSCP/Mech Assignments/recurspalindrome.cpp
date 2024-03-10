#include <iostream>
#include <string.h>
using namespace std;
int strle(char s1[],int i){
if(s1[i]=='\0'){
return i;
}
else{
strle(s1,i+1);
}
}
int palind(char s1[],int l,int i){
if(l>=i){
cout<<"palindrome"<<endl;
return 0;
}
if(s1[l]!=s1[i]){
cout<<"not a palindrome"<<endl;
return 0;
}
else{
palind(s1,l+1,i-1);
}
}
int main(){
char s1[100];
cout<<"enter the string"<<endl;
cin.getline(s1,100);
int l=0;
int i=strlen(s1)-1;
cout<<strle(s1,l)<<endl;
palind(s1,l,i);
return 0;
}