#include <iostream>
#include <math.h>
using namespace std;
float calcdist(int ax,int ay,int bx,int by){
    float x= sqrt(pow((bx-ax),2)-pow((ay-by),2));
    return x;
}
int main(){
    float w;
    float px,py,ax,ay,bx,by;
    cin>>px>>py>>ax>>ay>>bx>>by;
    float dist=calcdist(px,py,0,0);
    cout<<dist;
    w=(min(calcdist(ax,ay,px,py),calcdist(bx,by,px,py)));
    if(calcdist(ax,ay,0,0)<=w || calcdist(bx,by,0,0)<=w){
        cout<<w<<endl;
    }
    else if(calcdist(ax,ay,0,0)>w || calcdist(bx,by,0,0)>w){
        w=w+min(calcdist(ax,ay,0,0), calcdist(bx,by,0,0));
        cout<<w<<endl;
    }
    else if(calcdist(ax,ay,bx,by)>2*w){
        w=max(calcdist(ax,ay,bx,by)-w,w);
        cout<<w<<endl;
    }
    
    return 0;
}