#include <stdio.h>
int main(){
    int x;
    int a;
    printf("enter a\t");
    scanf("%d",&a);
    int b= a/1000;
    int c=(a-b*1000)/100;
    int d=(a-b*1000-c*100)/10;
    int e=(a-(b*1000)-(c*100)-(d*10));
    int armstrong=  b*b*b+c*c*c+d*d*d+e*e*e;
    if( armstrong==a){
        printf("armstrong number");
    }
    else{
        printf("not armstrong number");
    }
     return 0;
}
