#include <iostream>
#include <climits>
#define MAX_VAL 10000
using namespace std;

void countsort(int a[],int n){
    int c[MAX_VAL],o[n];
    for(int j=0;j<MAX_VAL;j++){
        c[j]=0;
    }
    for(int i=0;i<n;i++){
        c[a[i]]++;
    }
    for(int j=1;j<MAX_VAL;j++){
        c[j]=c[j]+c[j-1];
    }
    for(int i=n-1;i>=0;i--){
       o[c[a[i]]-1]=a[i];
       c[a[i]]--;
    }
    for(int i=0;i<n;i++){
        a[i]=o[i];
    }

}
int main(){
      int a[4]={4,3,2,1};
      countsort(a,4);
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }
} 