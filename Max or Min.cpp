#include<stdio.h>
main(){
	int number,max=0,min=9999999999,L=1;
	do{
		scanf("%d",&number);
		if(number > max){
			max = number;
		}
		if(number<min){
			min = number;
		}
	printf("Max : %d\n",max);
	printf("Min : %d\n",min);
	}while( L != 0);
	
}
