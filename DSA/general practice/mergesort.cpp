#include <iostream>
using namespace std;
 void merge(int a[],int l,int m,int r){
    int k;
    int n1=m-l+1;
    int n2=r-m;
    int left[n1];
    int right[n2];
    for(int i=0;i<n1;i++){
        left[i]=a[i+l];
    }
    for(int j=0;j<n2;j++){
        right[j]=a[m+1+j];
    }
    int i=0;
    int j=0;
    k=l;
    while(i<n1 && j<n2){
      if(left[i]<=right[j]){
        a[k]=left[i];
        i++;
        k++;
      }
      else{
        a[k]=right[j];
        j++;
        k++;
      }
    }
    while(i<n1){
        a[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=right[j];
        j++;
        k++;
    }
}

void mergesort(int a[],int l,int r){
if(l<r){
    int m=l+(r-l)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);
}
}


int main(){
    int a[4]={4,3,2,1};
     mergesort(a,0,3);
     for(int i=0;i<4;i++){
         cout<<a[i]<<endl;
     }
     return 0;
} 