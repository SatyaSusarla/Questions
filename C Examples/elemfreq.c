	#include <stdio.h>
	int main(){
	    int array[4];
	    int c;
	    int d=0;
	    printf("enter 4 numbers\t");
	    scanf("%d",&array[0]);
	    scanf("%d",&array[1]);
	    scanf("%d",&array[2]);
	    scanf("%d",&array[3]);
	    printf("enter needed number");
	    scanf("%d",&c);
	    for(int i=0;i<=3;i++){
	        if(array[i]==c){
	            d=d+1;
	        }
	    }
	printf("%d",d);
	return 0;
	}
