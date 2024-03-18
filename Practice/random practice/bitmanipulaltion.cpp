#include <iostream>
using namespace std;
int getbit(int n,int pos){
    return ((n&(1<<pos))!=0);
}
int updatebit(int n, int pos, int value){
   int mask=(~(1<<pos));
   n=n&mask;
   return n | (value<<pos);
   }
int setbit(int n, int pos){
    return (n|(1<<pos));
}
int clearbit(int n,int pos){

    return (n & (~(1<<pos)));
}
int main(){
    cout<< getbit(4,1)<<endl;
    cout<< setbit(4,3)<<endl;
    cout<< clearbit(4,2)<<endl;
    cout<< updatebit(4,2,0)<<endl;
    
    return 0;
}