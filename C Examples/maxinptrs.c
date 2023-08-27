#include<stdio.h>
int power();
int main(){
    int a;
    int b;
    printf("enter a\t");
    scanf("%d",&a);
    printf("enter b\t");
    scanf("%d",&b);
    int*ptr=&a;
    int*ptr1=&b;
    if(*ptr1>*ptr){
        printf("%d",*ptr1);
    }
    else if(*ptr1=*ptr){
        printf("same");
    }
    else{
        printf("%d",*ptr);
    }
    return 0;
}
