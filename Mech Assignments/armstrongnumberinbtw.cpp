#include <iostream>
using namespace std;
int main(){
    int l,m;
    cout<<"enter the range"<<endl;
cin>>l>>m;
for(int i=l;i<=m;i++){
int s=0;
for(int j=i;j>0;j=j/10){
int r=j%10;
s=s+r*r*r;
}
if(s==i){
cout<<i<<endl;
}
}
return 0;
}
int l,m;