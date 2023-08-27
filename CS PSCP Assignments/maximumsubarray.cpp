#include <iostream>
using namespace std;

void add(int a[],int n,int maxsum,int fakesum,int start,int fakestart,int end,int fakeend){
    
    if(n==fakeend){
        cout<<endl<<"{ ";
        for(int i=start;i<=end;i++){
        cout<<a[i]<<" ";
        
     }
     cout<<"}";
     return;
    }
 
fakesum=fakesum+a[fakeend];
if(fakesum>maxsum){
   //add(int a[],int n,int maxsum,int fakesum,int &start,int fakestart,int &end,int fakeend)
    add(a,n,fakesum,fakesum,fakestart,fakestart,fakeend,fakeend+1);
}
else if(fakesum>0 && fakesum<maxsum){
    //add(int a[],int n,int maxsum,int fakesum,int &start,int fakestart,int &end,int fakeend)
     add(a,n,maxsum,fakesum,start,fakestart,end,fakeend+1);
}
else {
   //add(int a[],int n,int maxsum,int fakesum,int &start,int fakestart,int &end,int fakeend)
    add(a,n,maxsum,0,start,fakeend+1,end,fakeend+1);
}
}

int main() {
    int n;
    cout<<"enter the array size"<<endl;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" element"<<endl;
        cin>>a[i];
    }
    int start=0;
 
    int fakestart=0;
    int end=0;

    int fakeend=1;
    
    int fakesum=a[start];
  int maxsum=a[start];
     add(a,n,maxsum,fakesum,start,fakestart,end,fakeend);

     
return 0;
}