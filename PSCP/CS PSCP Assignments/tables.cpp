#include <iostream>
using namespace std;
int tables(int n){
    char t[20][20]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty"};
     char s[20][20]={"ones","twos","threes","fours","fives","sixs","sevens","eights","nines","tens","elevens","twelves","thirteens","fourteens","fifteens","sixteens","seventeens","eighteens","nineteens","twentys"};


    for(int i=0;i<20;i++){
        if(n*(i+1)<=20){
        cout<<t[n-1]<<" "<<s[i]<<" = "<<t[n*(i+1)-1]<<endl;
    }
    else{
        cout<<t[n-1]<<" "<<s[i]<<" = "<<n*(i+1)<<endl;
    }
    }
    return 0;
}

int main(){
    int n;
    cout<<"enter the number to get table of ";
    cin>>n;
tables(n);
return 0;
}