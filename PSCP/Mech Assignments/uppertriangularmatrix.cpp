#include <iostream>
using namespace std;
int upper_half(int a[][100],int b,int c){
for(int i=0;i<b;i++){
for(int j=i;j<b;j++){
cout<<a[i][j]<< " ";
}
cout<<endl;
for(int k=0;k<(i+1)*2;k++){
cout<<" ";
}
}
cout<<endl;
}
int main(){
int b;
cout<<"enter square matrix dimension"<<endl;
cin>>b;
int a[b][100];
for(int i=0;i<b;i++){
for(int j=0;j<b;j++){
cout<<"enter the term"<<endl;
cin>>a[i][j];
}
}
int c=b;
upper_half(a,b,c);
return 0;
}