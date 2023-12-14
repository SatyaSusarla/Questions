#include <iostream>
using namespace std;

void insertionsort(int a[], int n){
    int i,key,j;
    for(i=1;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=key;
    }
}

int main(){
    int a[4]={4,3,2,1};
    insertionsort(a,4);
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}