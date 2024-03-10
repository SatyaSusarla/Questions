#include <iostream>
using namespace std;
int sum2d(int a[][100],int r,int c,int x,int y){
if((r==0)&&(c==0)){
return a[r][c];
}
if(c==0){
return a[r][c]+sum2d(a,r-1,y,x,y);
}
else{
return a[r][c]+sum2d(a,r,c-1,x,y);
}
}
int main(){
int r,c;
cout<<"enter the dimensions of the matrix"<<endl;
cin>>r>>c;
int a[r][100];
cout<<"enter the elements for matrix"<<endl;
for(int i=0;i<r;i++){
for(int j=0;j<c;j++){
cin>>a[i][j];
}
}
cout<<"sum is "<<sum2d(a,r-1,c-1,r-1,c-1);
return 0;
}