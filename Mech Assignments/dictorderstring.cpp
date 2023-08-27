#include <iostream>
#include <string.h>
using namespace std;
int main(){
int i;
int n;
cout<<"enter the number of strings"<<endl;
cin>>n;
char temp[100];
char s[n+1][100];
for (i=0;i<n;i++){
cin>>s[i];
}
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(strcmp(s[j],s[j+1])>0){
strcpy(temp,s[j]);
strcpy(s[j],s[j+1]);
strcpy(s[j+1],temp);
}
}
}
for(int i=0;i<n;i++){
cout<<s[i]<<" ";
}
return 0;
}