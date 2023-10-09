#include <iostream>
#include <climits>
#include <ctype.h>
#define n 100
using namespace std;

class stack{
    string arr[n];
    int top;
    public:
    stack(){
        top=-1;
    }
    void push(char x){
     if(top==n-1){
        cout<<"stack overflow"<<endl;
        return;
     }
     top++;
     arr[top]=x;
    }
    bool empty(){
        return top==-1;
    }
    void pop(){
        if(top==-1){
            cout<<"no elements to pop"<<endl;
            return;
        }
        top--;
    }
    string topp(){
        if(top==-1){
            cout<<"no element in stack"<<endl;
            exit(0);
        }
     return arr[top];
    }
    void display(){
        char x=top;
        while(x>=0){
            cout<<"      "<<arr[x];
            x--;
        }
    }
};
int prec(string c){
    if(c=="^"){
        return 3;
    }
    else if(c=="*" || c=="/" || c=="%"){
        return 2;
    }
    else if(c=="+" || c=="-"){
        return 1;
    }
    else{
        return -1;
    }
}
string infixtopostfix(string s){
    cout<<"Element   Operation                                          Elements of Stack "<<endl;
    stack st;
    string res;
    for(int i=0;i<s.length();i++){
        if(isdigit(s[i]) ||isalpha(s[i]) || s[i]=='.' ||s[i]==' '){
            cout<<s[i]<<"          The element will be added to result string ";
            st.display();
            cout<<endl;
            res+=s[i];
        }
        else if(s[i]=='('){
            cout<<s[i]<<"          The element will be pushed to stack ";
            st.display();
            
            cout<<endl;
            st.push(s[i]);
        }
        else if(s[i]==')'){
            while(!st.empty() && st.topp()!="("){
            cout<<s[i]<<"          The element will be popped from stack and will be added to result string ";
            st.display(); 
            cout<<endl;
                res+=st.topp();
                st.pop();
            }
           if(!st.empty()){
                st.pop();
            }
        }
        else{
            string sr;
            sr=s[i];
            while(!st.empty() && prec(st.topp())>=prec(sr)){
             cout<<s[i]<<"          The element will be popped from stack and will be added to result string ";
             st.display();
          cout<<endl;
                res+=st.topp();
                st.pop();
            }
            cout<<s[i]<<"          The element will be pushed to stack ";
            st.push(s[i]);
          cout<<endl;
        }
    }
      while(!st.empty()){
          cout<<"         The elements remaining will be popped from stack and will be added to result string ";
          st.display();
          cout<<endl;
        res+=st.topp();
                st.pop();
            }
    return res;
}

int main(){
    string s;
    cout<<"Enter the Infix expression"<<endl;
    getline(cin,s);
    cout<<"The steps and Postfix expression is : "<<endl<<infixtopostfix(s)<<endl;
    return 0;
}