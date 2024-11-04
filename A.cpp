#include<stdio.h>
#include<conio.h>
main()
{
	int m;
	printf("Enter value of m = ");
	scanf("%d",&m);
	if(m>=0 && m<33)
	{
	printf("Fail");
    }
    if(m>=33 && m<50)
    {
    	printf("Conditionally Pass");
	}
	if(m>=50 && m<=100)
	{
		printf("Pass");
	}
	getch();
}

 

