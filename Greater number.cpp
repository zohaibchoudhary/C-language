#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("   Enter a:");
	scanf("%d",&a);
	printf("   Enter b:");
	scanf("%d",&b);
	printf("   Enter c:");
	scanf("%d",&c);
	if(b<a && c<a)
	{
		printf("   a is greater");
	}
    else if(a<b && c<b)
    {
    	printf("   b is greater");
	}
	else if(a<c && b<c)
	{
		printf("   c is greater");
	}
	else
	{
		printf("Invalid number");
	}
	getch();
	
	
	
}
