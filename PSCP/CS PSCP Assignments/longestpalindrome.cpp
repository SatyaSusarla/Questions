#include <iostream>
#include <string.h>
using namespace std;
int checkpalindrome(char a[],int n,int start,int end){
    int mid=(start+end)/2;
    if(start>mid){
        return 0;
    }
        if(a[start]==a[end]){
            checkpalindrome(a,mid,start+1,end-1);
        }
        else{
            return -1;
        }
    
    
}

int main(){
    char s[100];
    cout<<"enter the string"<<endl;
    cin.getline(s,100);
    int start;
    int end;
    int max=0;
    for(int i=0;i<strlen(s);i++){
        for(int j=strlen(s)-1;j>=0;j--){
            if(s[i]==s[j]){
                if(checkpalindrome(s,100,i,j)==0){
                    if((j-i)>max){
                        max=j-i;
                        start=i;
                        end=j;
                    }
                }
            }
        }
    }
for(int i=start;i<=end;i++){
    cout<<s[i];
}
return 0;
}