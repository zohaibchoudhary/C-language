#include<stdio.h>
#include<conio.h>
main()
{
	int m;
	printf("Enter marks:");
	scanf("%d",&m);
	if(m>=80)
	printf("A+");
	else if(m>=70 && m<80)
    printf("A");
    else if(m>=60 && m<70)
    printf("B");
    else if(m>=50 && m<60)
    printf("C");
    else if(m>=40 && m<50)
    printf("D");
    else if(m>=33 && m<40)
    printf("E");
    else
    printf("F");
    getch();
    
}
