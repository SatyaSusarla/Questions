#include <iostream>
using namespace std;
int merge(int a[],int b,int c[],int d){
int k=1;
int elements=b+d;
int merge[100];
for(int i=0;i<b;i++){
merge[i]=a[i];
k++;
}
for(int j=0;j<d;j++){
merge[b+j]=c[d-1-j];
}
for(int i=0;i<elements;i++){
for(int j=0;j<elements-i-1;j++){
if(merge[j]>merge[j+1]){
int c=merge[j];
merge[j]=merge[j+1];
merge[j+1]=c;
}
}
}
int nonrepeat[100];
int s=0;
for(int i=0;i<(elements);i++){
if(merge[i]!= merge[i+1]){
nonrepeat[s]=merge[i];
s++;
}
}
//nonrepeat[s]=merge[(elements-1)];
cout<<"values in sorted order are"<<endl;
for(int z=0;z<s;z++){
cout<<nonrepeat[z]<<endl;
}
return 0;
}
int main(){
int b,d;
cout<<"enter number of elements in first array"<<" ";
cin>>b;
int a[b];
cout<<"enter elements in ascending order"<<endl;
for(int i=0;i<b;i++){
cout<<endl;
cin>>a[i];
}
cout<<"enter number of elements in second array"<<" ";
cin>>d;
int c[d];
cout<<"enter elements in descending order"<<endl;
for(int j=0;j<d;j++){
cout<<endl;
cin>>c[j];
}
cout<<endl;
merge(a,b,c,d);
return 0;
}