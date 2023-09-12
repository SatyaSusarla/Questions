#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        float a,b,c;
        cin>>a>>b>>c;
        float x=abs(((a+b)/2)-a);
        cout<<ceil(x/c)<<endl;
    }
    return 0;
}