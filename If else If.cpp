#include<stdio.h>
main()
{
float a,b;
printf("Enter value of a:");
scanf("%f",&a);	
printf("Enter value of b:");
scanf("%f",&b);
char op;
printf("Enter value of operator :");
scanf("% c",&op);
if(op=='+')
{
	printf("%d",a+b);
}
else if  (op=='-')
{
	printf("%f",a-b);
}
else if  (op=='*')
{
	printf("%f",a*b);
}
else if  (op=='/')
{
	printf("%f",a/b);
}
else{
	printf("Invalid operator");
}
	
}
