#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	if(argc != 2)
	{
		printf("Usage: $command argument\n");
		exit(1);
	}
	
	printf("Length of input string is: %zd", strlen(*(argv + 1)));
}