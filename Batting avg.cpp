#include<stdio.h>
main()
{
	float i,j;
	float avg;
    printf("Runs Scored: ");
    scanf("%f",&i);
  	printf("Times Out  : ");
    scanf("%f",&j); 
    if(j==0)
    {
    	printf("%f",i);
	}
	avg=i/j;
	printf("Your batting average is %f",i/j);
    
}

