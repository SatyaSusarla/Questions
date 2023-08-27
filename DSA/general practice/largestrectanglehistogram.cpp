#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
int* prevsmaller(int a[],int n){
int* ps=new int[n];
stack<int> s;
for(int i=0;i<n;i++){
while(!s.empty() && a[s.top()]>=a[i]){
    s.pop();
}
if(s.empty()){
    ps[i]=-1;
}
else{
    ps[i]=s.top();
}
s.push(i);
}
return ps;
}
int* nextsmaller(int a[],int n){
int* ps=new int[n];
stack<int> s;
for(int i=n-1;i>=0;i--){
while(!s.empty() && a[s.top()]>=a[i]){
    s.pop();
}
if(s.empty()){
    ps[i]=n;
}
else{
    ps[i]=s.top();
}
s.push(i);
}
return ps;
}
int maxarea(int a[],int n){
    int maxans=0;
    int* ps=prevsmaller(a,n);
    int* ns=nextsmaller(a,n);
    for(int i=0;i<n;i++){
        int curr=(ns[i]-ps[i]-1)*a[i];
        maxans=max(maxans,curr);
    }
    return maxans;
}
int main(){
    int a[]={4,2,1,5,6,3,2,4,2};
   cout<< maxarea(a,9)<<endl;
}