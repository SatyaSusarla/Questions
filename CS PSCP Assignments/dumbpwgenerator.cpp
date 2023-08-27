#include <iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the numbers"<<endl;
    cin>>n>>m;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
            for(int k=97;k<(97+m);k++){
                for(int l=97;l<(97+m);l++){
                    if(i>=j){
                     cout<<i<<j<<char(k)<<char(l)<<i+1<<" ";
                    }
                    else{
                        cout<<i<<j<<char(k)<<char(l)<<j+1<<" ";

                    }
                }
             
            }
        }
    }
    return 0;
}