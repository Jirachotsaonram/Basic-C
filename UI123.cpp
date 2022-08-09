#include <stdio.h>

main()
{
    int n;
    float avg;
    char a;
    int number;
    int sum =0,i;

while(a != 'q'){
	printf("\n\nEnter amount ");
    scanf("%d", &n);
   
   
    for ( i = 0; i < n; i++) {
        printf("\n Enter input %d: ", i + 1);
        scanf("%d", &number);
        sum = number+sum;
    }
    
    avg = sum / n ;
    
	printf("\n\nAverage: %0.4f",avg);
    avg=0;
    sum=0;
	printf("\n\nEnter End 'q' ");
	scanf("%c",&a);

}
	printf("\n\nThank You");
}
