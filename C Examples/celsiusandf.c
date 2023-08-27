#include <stdio.h>

int main(){
    char a;
    int b;
   
    printf("enter c or f\t");
    scanf("%c",&a);
    printf("enter temperature\t");
    scanf("%d",&b);
    if(a=='c'){
        float d=b*1.8+32;
        printf("farenhiet is %f",d);
    }
    else{
        float e=(b-32)*0.5556;
        printf("celsius is %f",e);
  
}
return 0;
}
