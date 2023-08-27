#include <iostream>
#include <string.h>
using namespace std;
int palindrome(char s[100],int n,int size,int start,int end){
for(int i=0;i<(size/2);i++){
if(s[start+i]!=s[end-i]){
    return 0;
}
else{
    continue;
    }
}
return 1;
}
int main(){
cout<<"enter a string"<<endl;
char s[100];
cin.getline(s,100);
char temp[100];
int size=0;
int start=0;
int end=0;
while(end<=strlen(s)){
    for(int i=start;i<strlen(s);i++){
        if(end==strlen(s)-1){
              if(palindrome(s,100,size,start,end)==1){
                for(int i=start;i<=end;i++){
                    s[i]='*';
                }
            }
        }
        if(isspace(s[i])){
            end=(i-1);
            if(palindrome(s,100,size,start,end)==1){
                for(int i=start;i<=end;i++){
                    s[i]='*';
                }
            }
            end=end+2;
            start=end;
            size=0;
        }
        else{
            size++;
            end++;
        }
    }
}
for(int i=0;i<strlen(s);i++){
    cout<<s[i];
}
return 0;

}