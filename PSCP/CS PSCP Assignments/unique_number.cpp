

#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cout<<"Enter number"<<endl;
    cin>>n;
    
    int count = 0;
    
    while(n > 0) {
        
    int r = n % 10;
    int q = r;
    int temp = n;
    
    while(temp>0) {
        
        temp = temp / 10;
        int p = temp % 10;
        
        if(p == q) {
            count++;
        }
    }
    
    n = n / 10;
    
    }
    
    if(count != 0)
    cout<<"No";
    
    else
    cout<<"Yes";
    
     return 0;
}