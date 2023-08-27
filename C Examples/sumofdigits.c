#include <stdio.h>
int main(){
    int a;
    printf("enter a");
    scanf("%d",&a);
    int b= a/1000;
    int c=(a-b*1000)/100;
    int d=(a-b*1000-c*100)/10;
    int e=(a-(b*1000)-(c*100)-(d*10));
    int sum=  b+c+d+e;
    printf("%d",sum);
     return 0;
}

