
#include<stdio.h>
int main(){
int a;
int b;
printf("enter number a");
scanf("%d",&a);
printf("enter number b");
scanf("%d",&b);

if(a>b){
    printf("a is bigger than b");
}
else if(a==b){
    printf("equal numbers");
}
else{
    printf("b is bigger than a");
}
return 0;
}

