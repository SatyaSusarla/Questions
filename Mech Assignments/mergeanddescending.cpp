#include <iostream>
using namespace std;
int main(){

int m,n,k,i,j;
cout<<"enter the sizes of two arrays"<<endl;
cin>>m>>n;
int first[m];
int second[n];
int merge[m+n];
for(i=0;i<m;i++){
cout<<"enter terms for first array"<<endl;
cin>>first[i];
merge[i]=first[i];
}
k=i;
for(j=0;j<n;j++){
cout<<"enter terms for second array"<<endl;
cin>>second[j];
merge[k+j]=second[j];
}
cout<<endl;
for(int x=0;x<(m+j-1);x++){
for(int y=0;y<(m+j-1-x);y++){
if(merge[y]<merge[y+1]){
int c=merge[y];
merge[y]=merge[y+1];
merge[y+1]=c;
}
}
}
for(int z=0;z<m+n;z++){
cout<<merge[z]<<endl;
}
return 0;
}