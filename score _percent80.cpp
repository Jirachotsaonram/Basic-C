// Start 21/9/2022  Last 21/9/2022

#include<stdio.h>
#include<conio.h>


main(){
float score,percent;
char name[80];
	printf("Enter Name");
	scanf("%s",&name);
	printf("Enter Score");
	scanf("%f",&score);
	
	percent =  score * 100 / 80;
	
	printf("Name %s Percent %.2f",name,percent);
}
