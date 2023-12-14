#include <iostream>
#include <climits>
#include <math.h>
#define MAX_VAL 10
using namespace std;

int getMax(int array[], int n) {
  int max = array[0];
  for (int i = 1; i < n; i++)
    if (array[i] > max)
      max = array[i];
  return max;
}
int gd(int no,int pos){
    int divfact=pos;
    return (no/divfact)%10;
}

void countingsort(int a[],int n,int d){
      int c[MAX_VAL],o[n];
    for(int j=0;j<MAX_VAL;j++){
        c[j]=0;
    }
    for(int i=0;i<n;i++){
        c[gd(a[i],d)]++;
    }
    for(int j=1;j<MAX_VAL;j++){
        c[j]=c[j]+c[j-1];
    }
    for(int i=n-1;i>=0;i--){
        int dig=gd(a[i],d);
        o[c[dig]-1]=a[i];
        c[dig]--;
    }
    for(int i=0;i<n;i++){
        a[i]=o[i];
    }
}
void radixsort(int array[], int size) {
  int max = getMax(array, size);
  for (int place = 1; max / place > 0; place *= 10)
    countingsort(array, size, place);
}

int main(){
      int a[4]={4,2,3,1};
      radixsort(a,4);
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }
}