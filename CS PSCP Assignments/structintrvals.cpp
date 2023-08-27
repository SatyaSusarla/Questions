#include <iostream>
using namespace std;

struct pairs{
    int one;
    int two;
};

int main(){
    cout<<"enter number of pairs"<<endl;
    int n;
    cin>>n;
    pairs p[n];
    for(int i=0;i<n;i++){
        cout<<"enter elements in the pair"<<endl;
        cin>>p[i].one>>p[i].two;
    }
    int count=0;
    int a[100];
    a[count]=0;

    for(int j=1;j<n;j++){
        cout<<count<<endl;
        for(int i=0;i<=count;i++){
       if(p[i].one<=p[j].one && p[i].two<=p[j].two && p[i].two>=p[j].one){
        p[i].two=p[j].two;
        continue;
       }
       else if(p[i].one<=p[j].one && p[i].two>=p[j].two){
         continue;
       }
       else if(p[i].one>=p[j].one && p[i].two<=p[j].two){
          p[i].one=p[j].one;
          p[i].two=p[j].two;
          continue;
       }
       else if(p[i].one>=p[j].one && p[i].two>=p[j].two && p[i].one<=p[j].two){
        p[i].one=p[j].one;
        continue;
       }
       else if(p[i].two<p[j].one){
        count++;
        a[count]==j;
       }
        }
    }
    for(int i=0;i<=count;i++){
        cout<<"pairs are "<<p[i].one<<" and "<<p[i].two<<endl;
    }
    return 0;
}