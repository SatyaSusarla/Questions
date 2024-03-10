#include <iostream>
#include <string.h>
using namespace std;
int main(){
    char s[100];
    int a,b,c;
    cout<<"enter the string"<<endl;
    cin.getline(s,100);
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='e'){
            a=0;
        }
        if(s[i]=='l'){
            b=0;
        }
        if(s[i]=='f'){
            c=0;
        }
    }
    if(a==0 && b==0 && c==0){
        cout<<"it is an elfish word"<<endl;
    }
    else{
        cout<<"not an elfish word"<<endl;
    }
    return 0;
}
