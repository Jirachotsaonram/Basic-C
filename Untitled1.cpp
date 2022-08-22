#include<stdio.h>
main(){
	int num,max=0,mix=99999999;
	char a ='a';
	while( a !='q'){
		printf("Enter is number");
		scanf("%d",&num);
		if(num>=max){
			max = num;
		}if(num<=mix){
			mix = num;
		}
		printf("Max :%d\n",max);
		printf("Mix :%d\n",mix);
		printf("Enter is Exit(q/Q)\n");
		scanf("%c",&a);
	}
}
