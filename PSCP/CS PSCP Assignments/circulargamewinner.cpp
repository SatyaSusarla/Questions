#include <iostream>
using namespace std;
int count=0;
int pos=0;
int game(int a[100],int n,int k,int pos){
if(count>=(n-2)){
return a[pos];
}

if((pos+k-1)>=n){
    pos=(pos+k-1)-n;
    if(a[pos]!=0){
        a[pos]=0;
        count++;
        game(a,n,k,pos);
    }
    else{
        pos++;
    game(a,n,k,pos);
}
}
if(n>pos+k-1){
    if(a[pos+k-1]!=0){
    a[pos+k-1]=0;
    count++;
    game(a,n,k,pos+k);
}
else{
    pos++;
    game(a,n,k,pos);

}
}
}
int main(){
    int n,k;
    cout<<"enter number of members and jumps"<<endl;
    cin>>n>>k;
    int a[n];
    int temp=1;
for(int i=0;i<n;i++){
    a[i]=temp;
    temp++;
}
game(a,n,k,0);
for(int i=0;i<n;i++){
    if(a[i]!=0){
cout<<a[i]<<" is the winner";
break;
    }
}

return 0;
}