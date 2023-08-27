#include <iostream>
#include <string.h>
using namespace std;

int main(){
cout<<"enter a string"<<endl;
char s[100];
cin.getline(s,100);
int totalelements=strlen(s);
cout<<strlen(s);
int startelememts=0;
for(int i=0;i<totalelements;i++){
    for(int j=i+1;j<totalelements;j++){
        if(s[i]==s[j]){
            for(int k=j;k<totalelements;k++){
                char temp=s[k];
                s[k]=s[k+1];
                s[k+1]=temp;
            }
            totalelements--;
        }
    }
}
cout<<endl;
for(int i=startelememts;i<totalelements;i++){
    cout<<s[i];
}
return 0;
}