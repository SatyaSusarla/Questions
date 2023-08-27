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
int makeitst(char s[100],int size,int i){
    char temp[100];
    int count=0;
    for(int j=i;j<strlen(s);j++){
       temp[count]=s[j];
       count++;
    }
    for(int j=0;j<i;j++){
        temp[count]=s[j];
        count++;
    }
    for(int i=0;i<strlen(s);i++){
        cout<<temp[i];
    }
    cout<<endl;
    if(checkpalindrome(temp,100,0,strlen(temp)-1)==0){
      return 1;
    }
    return 0;
}

int main(){
    char s[100];
    cout<<"enter the string"<<endl;
    cin.getline(s,100);

    int flag=0;
    for(int i=0;i<strlen(s)-1;i++){
        if(s[i]==s[i+1]){
            if(makeitst(s,100,i+1)==1){
                flag=1;
                break;
            }
            else{
                continue;
            }
        }
    }
    if(flag==1){
        cout<<"it is a rotated palindrome"<<endl;
        return 0;
    }
        cout<<"it is not a rotated palindrome"<<endl;
    }
