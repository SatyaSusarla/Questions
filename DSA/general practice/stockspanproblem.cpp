#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
int* span(int a[],int n,int s[]){
s[0]=1;
stack<int> st;
for(int i=0;i<n;i++){
    while(!st.empty() && a[st.top()]<=a[i]){
        st.pop();
    }
        if(st.empty()){
            s[i]=i+1;
        }
        else{
            s[i]=(i-st.top());
        }
        st.push(i);
    }
}


int main(){
    int a[]={100,80,60,70,75,85};
int s[6];
span(a,6,s);
for(int i=0;i<6;i++){
    cout<<s[i]<<endl;
}
return 0;
}