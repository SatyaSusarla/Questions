#include<stdio.h>
int power();
int main(){
    power();
    return 0;
}


int power(){
    int a;
    int b;
    int c=1;
    printf("enter a\t");
    scanf("%d",&a);
     printf("enter b\t");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        c=c*a;
    }
 printf("%d",c);
    return 0;
}

