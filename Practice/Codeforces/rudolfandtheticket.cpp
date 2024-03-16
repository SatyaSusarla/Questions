#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int x=0;x<t;x++){
    int n;
    int m;
    int k;
    cin>>n>>m>>k;
    int l[n];
    int r[m];
    for(int i=0;i<n;i++){
        cin>>l[i];
    }
    for(int i=0;i<m;i++){
        cin>>r[i];
    }
    int ttl=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(r[j]<=k-l[i]){
                ttl++;
            }
        }
    }
    cout<<ttl<<endl;
    }
    return 0;
}