#include<stdio.h>
main(){
	int i;
	for(i = 1 ; i < 40 ; i ++){
		if(i==25){
			break; /*break and continue*/
		}
		printf("%d\n",i);
	}
}
