#include <iostream>
#include <string.h>
#include <climits>
#include <math.h>
#define MAX_VAL 10
using namespace std;
void swap(string *a, string *b) {
  string t = *a;
  *a = *b;
  *b = t;
}
int partition(string a[],int low,int high){
    string pivot=a[high];
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

void quicksort(string a[],int low,int high){
    if(low<high){
        int piv=partition(a,low,high);
        quicksort(a,low,piv-1);
        quicksort(a,piv+1,high);
    }
}

 void merge(string a[],int l,int m,int r){
    int k;
    int n1=m-l+1;
    int n2=r-m;
    string left[n1];
    string right[n2];
    for(int i=0;i<n1;i++){
        left[i]=a[i+l];
    }
    for(int j=0;j<n2;j++){
        right[j]=a[m+1+j];
    }
    int i=0;
    int j=0;
    k=l;
    while(i<n1 && j<n2) {     
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

void mergesort(string a[],int l,int r){
if(l<r){
    int m=l+(r-l)/2;
    mergesort(a,l,m);
    mergesort(a,m+1,r);
    merge(a,l,m,r);
}
}



void insertionsort(string a[], int n){
    int i,j;
    string key;
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



int getMax(string arr[], int n) {
  int maxl = 0;
  for (int i = 1; i < n; i++){
      maxl = max(maxl,int(arr[i].length()));
  }
  return maxl;
}

void countingsort(string arr[],int m, int exp) {
    const int n = m;
    const int k = 256;

    string output[n];
    int count[k];
    for(int i=0;i<k;i++){
        count[i]=0;
    }

    for (int i = 0; i < n; i++) {
        int index = (exp < arr[i].length()) ? int(arr[i][arr[i].length() - exp - 1]) : 0;
        count[index]++;
    }

    for (int i = 1; i < k; i++) {
        count[i] += count[i - 1];
    }
    for (int i = n - 1; i >= 0; i--) {
        int index = (exp < arr[i].length()) ? int(arr[i][arr[i].length() - exp - 1]) : 0;
        output[count[index] - 1] = arr[i];
        count[index]--;
    }
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void radixsort(string arr[],int n) {
    int maxLength = getMax(arr,n);
    for (int exp = 0; exp < maxLength; exp++) {
        countingsort(arr,n, exp);
    }
}


void heapify(string arr[], int n, int root) {
    int largest = root;
    int left = 2 * root + 1;
    int right = 2 * root + 2;
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }
    if (largest != root) {
        swap(arr[root], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapsort(string arr[],int m) {
    int n = m;
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}


int main(){
     int n;
     cout<<"Enter Number of Strings"<<endl;
     cin>>n;
     string s[n];
     for(int i=0;i<n;i++){
         getline(cin,s[i]);
     }
     int choice;
     cout<<"Enter 1 for Insertion Sort 2 for Merge Sort 3 for Quick Sort 4 for Heap Sort 5 for Radix Sort 0 for Exit"<<endl;
     cin>>choice;
     do{
         switch(choice){
             case 1:{
                 insertionsort(s,n);
                 for(int i=0;i<n;i++){
                     cout<<s[i]<<endl;
                 }
                 break;
             }
              case 2:{
                 mergesort(s,0,n-1);
                 for(int i=0;i<n;i++){
                     cout<<s[i]<<endl;
                 }
                 break;
             }
              case 3:{
                 quicksort(s,0,3);
                 for(int i=0;i<n;i++){
                     cout<<s[i]<<endl;
                 }
                 break;
             }
              case 4:{
                 heapsort(s,n);
                 for(int i=0;i<n;i++){
                     cout<<s[i]<<endl;
                 }
                 break;
             }
              case 5:{
                 radixsort(s,n);
                 for(int i=0;i<n;i++){
                     cout<<s[i]<<endl;
                 }
                 break;
             }
             case 0:{
                 cout<<"Exit"<<endl;
                 break;
             }
             
         }
     }while(choice!=0);
    return 0;
}