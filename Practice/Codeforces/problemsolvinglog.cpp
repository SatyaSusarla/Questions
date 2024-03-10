#include <iostream>
using namespace std;
 
int main(){
    int rep;
    cin>>rep;
    for(int i=0;i<rep;i++){
    int abc;
    cin>>abc;
    string t;
    cin>>t;
    int a[26];
    for(int i=0;i<26;i++){
        a[i]=i+1;
    }
    /*for(int i=0;i<26;i++){
        cout<<a[i]<<endl;
    }
    */
    for(int i=0;i<t.length();i++){
        int x=t[i];
        a[(x-65)]--;
    
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(a[i]<=0){
            count++;
        }
    }
    cout<<count<<endl;
    }
    return 0;
}
