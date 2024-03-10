#include <iostream>
using namespace std;
int checkpalindrome(int a[],int n,int start,int end){
    int mid=(start+end)/2;
    if(start>mid){
        return 0;
    }
        if(a[start]==a[end]){
            checkpalindrome(a,mid,start+1,end-1);
        }
        else{
            return -1;
        }
    
    
}
int main(){
     int n;
    cout<<"enter the array size"<<endl;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<" element"<<endl;
        cin>>a[i];
    }
  
    int count=0;
    int finalcount=n-1;
    int actualcount=0;
    int fake=n;
    for(int i=0;i<fake;i++){
      
         if(checkpalindrome(a,n,count,finalcount)==0){
        cout<<"list is palindrome after "<<actualcount<<" operations"<<endl;
        break;
    }
    else{
        if(a[count]==a[finalcount]){
            count++;
            finalcount--;
            n=n-2;
            continue;
        }
        else if(a[count]>a[finalcount]){
            a[finalcount-1]=a[finalcount-1]+a[finalcount];
            finalcount--;
            actualcount++;
            n--;
            continue;
        }
        else if(a[count]<a[finalcount]){
            a[count+1]=a[count+1]+a[count];
             count++;
             actualcount++;
             n--;
             continue;
        }
    }
   
    }
    return 0;
    
}