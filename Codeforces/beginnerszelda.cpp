#include <iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0;i<(n+1);i++){
        a[i]=0;
    }
    for(int i=0;i<(2*n-2);i++){
        int b;
        cin>>b;
        a[b]++;
    }
    int count=0;
    for(int i=0;i<n+1;i++){
        
        if(a[i]==1){
            count++;
        }
    }
    int mcount;
    if(count%2==0){
        mcount=count/2;
    }
    else{
        mcount=(count/2)+1;
    }
    cout<<mcount<<endl;
    }
 
    return 0;
}
