#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter number"<<endl;
    cin>>n;
    int count=0;
    int fake=n;
    if(n<10){
        cout<<n<<endl;
        return 0;
    }
    int last=n%10;
    count++;
    fake=fake/10;
    while(fake>9){
      fake=fake/10;
      count++;
    }
 
    int first=fake;
    n=n-(first*pow(10,count))+(last*pow(10,count))-(last)+first;
    cout<<n<<endl;
    return 0;
}