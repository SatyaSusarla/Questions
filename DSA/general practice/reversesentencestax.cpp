#include <iostream>
#include <stack>
#include <string.h>
using namespace std;
void revsentence(string s){
    stack<string> st;
 
   for(int i=0;i<s.length();i++){
    string word="";
    while(s[i]!=' '&& i<s.length()){
       word=word+s[i];
       i++;
    }
    st.push(word);
   }
   while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
   }
}
int main(){
   string s;
   cout<<"enter string"<<endl;
   getline(cin,s);
   revsentence(s);
   return 0;
}