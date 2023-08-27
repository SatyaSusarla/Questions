#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cin>>target;
    bool found=false;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int lo=i+1; 
        int hi=n-1;
        while(lo<hi){
            int current=a[i]+a[lo]+a[hi];
            if(current==target){
                found=true;
                break;
            }
            if(current<target){
                lo++;
            }
            else{
                hi--;
            }
        }
        if(found){
            break;
        }
    }
    if(found){
        cout<<"True"<<endl;

    }
    else{
        cout<<"False"<<endl;
    }
    return 0;
}