#include <iostream>
using namespace std;

void heapify(int a[],int n,int i){
    int maxidx=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && a[l]>a[maxidx]){
        maxidx=l;
    }
    if(r<n && a[r]>a[maxidx]){
        maxidx=r;
    }
    if(maxidx !=i){
        swap(a[i],a[maxidx]);
    }
}