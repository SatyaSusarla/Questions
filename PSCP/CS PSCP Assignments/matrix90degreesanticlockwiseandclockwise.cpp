#include <iostream>
using namespace std;
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
int b[m][100];
/* for clockwise
for(int i=(n-1);i>=0;i--){
    for(int j=0;j<m;j++){
        b[j][((n-1)-i)]=a[i][j];
    }
}
*/
//for anticlockwise
for(int j=0;j<n;j++){
    for(int i=0;i<m;i++){
        b[i][(j)]=a[j][(m-1)-i];
    }
}
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
}
return 0;
}
