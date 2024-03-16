#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int thrw(int pl,int dist, int who, int direc){
    if(direc==0){
        if( ((who+dist)%pl) == 0){
            return pl;
        }
        else
        return ((who+dist)%pl);
       
    }
    else if(direc==1){
        if( (((who+abs(pl-dist)))%pl)==0){
            return pl;
        }
        else
        return (((who+abs(pl-dist)))%pl);
    }
}

int main(){
    int t;
    cin>>t;
    for(int h=0;h<t;h++){
    int n,m,x;
    cin>>n>>m>>x;
    vector<int> a;
    a.push_back(x);
    for(int z=0;z<m;z++){
        int dist;
        char di;
        int sz=a.size();
        cin>>dist>>di;
        int direc=di-48;
        if(direc==15){
            for(int i=0;i<sz;i++){
                int temp=a[0];
                a.push_back(thrw(n,dist,temp,0));
                a.push_back(thrw(n,dist,temp,1));
                a.erase(a.begin());
            }
        }
   else if(direc==1){
            for(int i=0;i<sz;i++){
                int temp=a[0];
                a.push_back(thrw(n,dist,temp,1));
                a.erase(a.begin());
            }
        }
    else if(direc==0){
            for(int i=0;i<sz;i++){
                int temp=a[0];
                a.push_back(thrw(n,dist,temp,0));
                a.erase(a.begin());
            }
        }
      
         }
         
sort( a.begin(), a.end() );
a.erase( unique( a.begin(), a.end() ), a.end() );
cout<<a.size()<<endl;
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
cout<<endl;

}
         
         return 0;
         
}