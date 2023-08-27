#include <iostream>
using namespace std;
bool same(int a,int b){
    if(a==b){
        return 1;
    }
    return 0;
}
int samerow(int a[100][100],int r,int c,int i,int k,int j){
    if(a[i][j]==a[k][j]){
        if(j==(c-1)){
            cout<<i<<" and "<<k<<" are same "<<endl;
            if(k<r){
            samerow(a,r,c,i,k+1,0);
            }
            else if(k<(r-2)){
                samerow(a,r,c,i+1,i+2,0);
            }
        }
       else if(j<c){
        samerow(a,r,c,i,k,j+1);
        }
        
    }
    else{
         if(k<r){
            samerow(a,r,c,i,k+1,0);
            }
            else{
                if(i<(r-2)){
                    samerow(a,r,c,i+1,i+2,0);
                }
            }
            if(i==r-2){
                return 0;
            }
    }
}
int main(){
        int n,m,i,j;
    cout<<"enter rows and columns"<<endl;
    cin>>n>>m;
    int a[n][100];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<"enter the term"<<endl;
            cin>>a[i][j];
        }
    }
    samerow(a,n,m,0,1,0);
    return 0;
}
