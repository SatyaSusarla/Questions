#include<stdio.h>
int main(){
    int a;  //rows
    int b;  //columns
printf("enter a");
scanf("%d",&a);
printf("enter b");
scanf("%d",&b);
for(int i=1;i<=a;i++){
    for(int j=1;j<=b;j++){
        printf("*");
        }
    printf("\n");
}
return 0;
}
