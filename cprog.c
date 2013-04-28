#include<stdio.h>
#include<stdlib.h>

int factorial(int *);
int main(int argc, int *argv[])
{
	if(argc != 2)
	{
		printf("Usage: $command auguement\n");
		exit(1);
	}
	
	printf("Factorial of %d is %d: ", **(argv + 1), factorial(*(argv + 1)));
}

int factorial(int *number)
{
	int num = *number;
	
	if(num == 0)
		return 0;
	if(num == 1)
		return 1;
	
	else
		return num * factorial(num - 1);
}