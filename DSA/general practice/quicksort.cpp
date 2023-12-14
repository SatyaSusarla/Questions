#include <iostream>
using namespace std;
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partition(int a[],int low,int high){
    int pivot=a[high];
    int i=low-1;
   for(int j=low;j<high;j++){
       if(a[j]<=pivot){
           i++;
           swap(&a[i],&a[j]);
       }
   }
   swap(&a[i+1],&a[high]);
   return i+1;
}

void quicksort(int a[],int low,int high){
    if(low<high){
        int piv=partition(a,low,high);
        quicksort(a,low,piv-1);
        quicksort(a,piv+1,high);
    }
}

int main(){
     int a[4]={4,3,2,1};
    quicksort(a,0,3);
    for(int i=0;i<4;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}