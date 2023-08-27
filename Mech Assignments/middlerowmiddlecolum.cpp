#include <iostream>
using namespace std;
int midrc(int a[ ][100],int b,int c){
cout<<"middle row elements are"<<endl;
for(int j=0;j<c;j++){
cout<<a[b/2][j]<<" ";
}
cout<<endl;
cout<<"middle column elements are"<<endl;
for(int i=0;i<b;i++){
cout<<a[i][c/2]<<" ";
}
cout<<endl;
return 0;
}
int main(){
int b,c;
cout<<"enter row and column sizes"<<endl;
cin>>b>>c;
int a[b][100];
for(int i=0;i<b;i++){
for(int j=0;j<c;j++){
cout<<"enter the term"<<endl;
cin>>a[i][j];
}
}
midrc(a,b,c);
return 0;
}