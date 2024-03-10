#include <iostream> 
using namespace std;
 struct random{ char name[10]; float salary; int workh; }; 
 void stru(random); 
 int main(){ 
    int n; 
    cout<<"enter no of employees"<<endl; 
    cin>>n; 
    random s[n]; 
    for(int i=0;i<n;i++){
     cout<<"enter name"<<endl;
     cin>>s[i].name; 
     cout<<"enter salary"<<endl; 
     cin>>s[i].salary; 
     cout<<"enter workh"<<endl; 
     cin>>s[i].workh;
      } 
      cout<<"incremented salaries are"<<endl; 
      for(int i=0;i<n;i++){ 
        stru(s[i]); 
        } 
        return 0; 
        }
         void stru(random s1){
             if(s1.workh>=12){
                 s1.salary=s1.salary+150;
                  }
                   if(s1.workh<12 && s1.workh>=10){ 
                    s1.salary+=100; 
                    }
                     if(s1.workh<10 && s1.workh>=8){
                         s1.salary+=50; 
                         } 
                         cout<<endl<<s1.salary;
         }