#include <iostream>
using namespace std;

int azero(int a[], int n){
     for(int i=0;i<n;i++){
        if(a[i]!=0){
            return -1;
        }
    }
    return 0;
}
int largest(int arr[], int n)
{
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp=largest(a,n);
    for(int i=1;i<n-1;i++){
        if(a[i-1]==0 || a[i+1]==0 || a[i]==0){
            continue;
        }
        else{
            a[i-1]=a[i-1]-1;
            a[i]=a[i]-2;
            a[i+1]=a[i+1]-1;
        }
    }
        
        int x=1;
        int i=1;
    while(x!=temp){
    if(i==n-1){
        i=1;
        x++;
    }
    else if(a[i-1]==0 || a[i+1]==0 || a[i]==0){
        i++;
        x++;
        }
    else{
            a[i-1]=a[i-1]-1;
            a[i]=a[i]-2;
            a[i+1]=a[i+1]-1;
           i++;
           x++;
        }
    }
        
    
   
    int zero=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            zero=1;
        }
    }
    if(zero==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }
    return 0;
}