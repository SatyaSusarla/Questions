#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    for(int x=0;x<t;x++){
    
    int n;
    cin>>n;
    string s;
    cin>>s;
    int res=0;
    int i=0;
    while(i<=n-3){
        if(s[i]=='m' && s[i+1]=='a' && s[i+2]=='p'){
           res++;
           i=i+3;
        }
      else if(s[i]=='p' && s[i+1]=='i' && s[i+2]=='e'){
    res++;
    i=i+3;
       }
      else if((i+5<=(n-1)) && (s[i]=='m' && s[i+1]=='a' && s[i+2]=='p' && s[i+3]=='i' && s[i+4]=='e')){
    res++;
    i=i+5;
         }
        
        else{
            i++;
        }
}
    cout<<res<<endl;
    }
    return 0;
}