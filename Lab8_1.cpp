#include <stdio.h>
main(){
    int mom,i;
    char a;
	do{
    printf("Enter Multiplication tabl Number 1-12 : ");
    scanf("%d", &mom);
    printf("Multiplication table of %d\n", mom);
	for( i = 1; i <= 12; i++){
        printf("%d x %d = %d\n",mom,i,mom * i );}
    printf("Program End a Enter (N/n)\n\n\n\n");
    a = getchar();
    if( a == 'n',a == 'N')
    	break;
}while(a != 'n');
printf("Thank You");
}
        
  
    
    

    

