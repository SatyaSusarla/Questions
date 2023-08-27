
#include<stdio.h>
int main(){
char a;
printf("enter the charecter");
scanf("%c",&a);
if(a>='0' && a<='9'){
    printf("%c is digit",a);
}
else{
    printf("%c is not a digit",a);
}
return 0;
}
