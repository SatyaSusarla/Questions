#include <iostream>
#include <string.h>
using namespace std;

int main(){
int ele;
cin>>ele;
for(int i=0;i<ele;i++){
    int a,b,c;
    int countx=0;
    int countn=0;
       cin>>a>>b>>c;
    string s; cin>>s;
   
      c=b;
   
    for(int i=0;i<s.size();i++){
        if(s[i]=='+'){
            countx++;
        }
        else{
            countn++;
        }
        if(c+countx-countn>=a){
            cout<< "YES"<<endl;
            break;
        }
    }
    if(c+countx-countn>=a){
        continue;
    }
    else if(a==b){
        cout<<"YES"<<endl;
    }
    else if(b+countx<a){
        cout<<"NO"<<endl;
    }
    else if(b+countx>=a && b+countx-countn>=a){
        cout<<"YES"<<endl;
    }
    else if(b+countx>=a && b+countx-countn<a){
        cout<<"MAYBE"<<endl;
    }
}
    return 0;
    }
    
