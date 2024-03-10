#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
    int n;
    cin>>n;
    string a=to_string(n);
    int i;
    int flag=-1;
    for(i=1;i<=(a.length())/2;i++){
        if(a[i]!='0'){
            flag=i;
            break;
        }
    }
   
    if(flag==-1){
        cout<<"-1"<<endl;
    }
    else{
         int an=stoi(a.substr(0,flag));
    int bn=stoi(a.substr(i,a.length()-flag));
    if(an>=bn){
        cout<<"-1"<<endl;
    }
    else{
    cout<<an<<endl;
    cout<<bn<<endl;
    }
    }    
    }
    return 0;
}