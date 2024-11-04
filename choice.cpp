#include<stdio.h>
main()
{
	int a,b,choice;
	printf("Enter value of a:");
	scanf("%d",&a);
    printf("Enter value of b:");
	scanf("%d",&b);
	printf("Enter  any choice from 1 - 4:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("The sum of numbers is %d",a+b);
		break;
			case 2:
		printf("The subtraction of numbers is %d",a-b);
		break;
			case 3:
		printf("The multiplication of numbers is %d",a*b);
		break;
			case 4:
		printf("The division of numbers is %d",a/b);
		break;
		default:
		printf("invalid case");
	}
	}
