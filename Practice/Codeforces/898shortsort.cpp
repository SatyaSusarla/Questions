#include <iostream>
using namespace std;
int alpha(char c){
    if(c=='a'){
        return 0;
    }
    else if(c=='b'){
        return 1;
    }
    else if(c=='c'){
        return 2;
    }
    
}
int main(){
    int t;
    cin>>t;
     int maincount;
    for(int i=0;i<t;i++){
        maincount=0;
    char a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
        if(i==alpha(a[i])){
            maincount++;
        }
    }
    if(maincount>=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}