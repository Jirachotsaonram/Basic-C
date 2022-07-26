#include<stdio.h>
 main(){
 	int food;
 	
 	float num;
 	
 	printf("Please oeder food\n 1 Pizza      250 bath \n 2 Spaghetti   70 bath \n 3 Hamburger   70 bath \n 4 Fried Rice  50 bath \n 5 Crisps      50 bath \n 6 Regency    299 bath \n 7 Red Label 1050 bath");
 	printf("\nFood Menu enter number :");
 	scanf("%d",&food);
 
 	
 	
 	switch(food){
 		case 1:
 			
			 num = (250*107)/100;
 			printf("Pizza 250 bath");
 			break;
 		case 2:
 			num = (70*107)/100;
 			printf("Spaghetti 70 bath");
 			break;
 		case 3:
 			num = (70*107)/100;
 			printf("Hamburger 70 bath");
 			break;
 		case 4:
 			num = (50*107)/100;
 			printf("Fried Rice 50 bath");
 			break;
 		case 5:
 			num = (50*107)/100;
 			printf("Crisps 50 bath");
 			break;
 		case 6:
 			num = (299*107)/100;
 			printf("Regency 299 bath");
 			break;
 		case 7:
 			num = (1050*107)/100;
 			printf("Red Label 1050 bath");
 			
 			break;
 		default:
 			printf("Please order food");
 			
 			
 			
 			
	 }printf("\nVat %0.3f bath",num);
 	
 }
