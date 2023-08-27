#include <stdio.h>
int main(){
    int a,b,c;
    printf("a");
    scanf("%d",&a);
    printf("b");
    scanf("%d",&b);
    printf("c");
    scanf("%d",&c);
    if(a>b){
        if(c>a){
            printf("c>a>b");
        }
        else{
            printf("a>b>c");
    }
    }
    else if(b>c){
        if(a>b){
            printf("a>b>c");
        }
        else if(a>c){
            printf("b>a>c");
        }
        else{
            printf("b>c>a");
    }
    }
    
    else{
        if(b>a){
            printf("c>b>a");
        }
        else{
            printf("c>a>b");
}
}
   return 0;
}
	
	
