#include <iostream>
using namespace std;
 
int main(){
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
   char a[10][10];
   int score=0;
   int n;
   for(int i=0;i<10;i++){
       for(int j=0;j<10;j++){
           cin>>a[i][j];
           if(a[i][j]=='X'){
               int x=min(i+1,j+1);
               int y=min(abs(10-i),abs(10-j));
              
            score=score+min(x,y);
           
           }
          
       }
   }
 cout<<score<<endl;
   }
    return 0;
}