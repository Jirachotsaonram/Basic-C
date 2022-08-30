#include<stdio.h>
main(){
	int n=1,a=0,b=0,c=0,d=0;
	char x = 'z';
	do{
		printf("\nEnter number\n");
		
		
		
		scanf("%d",&n);
		
		if(n==0){
				printf("\nLess than zero = %d number",a);
				printf("\nmore than 0 but less than or equal to 101 = %d number",b);	
				printf("\nmore than 101 but less than or equal to 1000 = %d number",c);
				printf("\nmore than 1000 = %d number\n",d);
				a=0;b=0;c=0;d=0;
				printf("\nPress (q) for exit this program\n");
		
		}
		else if(x=='q'){
			break;
			
		}
		else if(n<0){
			a += 1;
			
		}
		else if(n<=101){
			b += 1;

		}
		else if(n<=1000){
			c += 1;
				
		}
		else if(n>=1000){
			d += 1;
				
		}
		
		scanf("%c",&x);
	}while(x != 'q');
	printf("\n\nThank You\n\n");
}
