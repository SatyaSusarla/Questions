#include<stdio.h>
int main(){
    int a;
    printf("enter a\t");
    scanf("%d",&a);
    for(int j=2;j<a;j++){
        if(a%j==0){
              printf("not a prime");
              break;
        }
    else{
        printf("prime");
    }
    }
 return 0;
}       //output issues

