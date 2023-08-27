#include<stdio.h>
int main(){
    float a;
    int n;  
printf("enter a :\t");
scanf("%f",&a);
n=a;
if(a != n){
    printf("not an integer");
}
else if(a<=0){
    printf("not an integer");
}
else{
    printf("it is an integer");
}
return 0;
}
