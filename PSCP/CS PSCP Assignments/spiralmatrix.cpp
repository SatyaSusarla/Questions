#include <iostream>
using namespace std;
/*void print(int a[][100],int n,int m,int r,int c,int check){
    if(check%2!=0){
    for(int j=0;j<c ;j++){
        for(int i=0;i<r ;i++){
            cout<<a[i][j];
            
        }
    }
}
 if(check%2==0){
    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            cout<<a[j][i];
            
        }
    }
}
}*/
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
//print(a,n,m,0,0,1);
int loop=m+(n-1);
int count=0;
int row=0;
int rowend=m-1;
int column=0;
int columnend=n-1;
int columncount=0;
int rowcount=0;
for(int i=0;i<loop;i++){
if(count%2==0){
    if(columncount%2==0){
    for(int j=column;j<=columnend;j++){
        cout<<a[j][row]<<" "; 
    }
    columncount++;
    row++;
    count++;
}
    else{
       for(int j=columnend;j>=column;j--){
        cout<<a[j][rowend]<<" "; 
    }
    columncount++;
    rowend--;
      count++;
    }
}
else{
      if(rowcount%2==0){
    for(int j=row;j<=rowend;j++){
        cout<<a[columnend][j]<<" "; 
    }
    rowcount++;
    columnend--;
      count++;
}
    else{
       for(int j=rowend;j>=row;j--){
        cout<<a[column][j]<<" "; 
    }
    rowcount++;
    column++;
      count++;
    }
}
}
return 0;
}