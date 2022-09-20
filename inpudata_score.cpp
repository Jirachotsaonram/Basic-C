// Start date 20/9/2022		Last date 20/9/2022 
#include<stdio.h>
#include<conio.h>

void inputdata();
void Displaydata();

char name;
int score;


main(){
	
	inputdata();
	Displaydata();	
}

void inputdata(){
	cprintf("Enter name and score");
	scanf("%s%d",name,score);
}

void Displaydata(){
	printf("Name %s score %d",name,score);
}

	
