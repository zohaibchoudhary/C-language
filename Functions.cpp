#include<stdio.h>

int addTwo(int num);
int main()
{
	int result = addTwo(5);
	printf("Result: ", result);
	return 0;
}
int addTwo(int num) {
    return num + 2;
}

