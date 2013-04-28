#include<stdio.h>
void passme(char *);
int main()
{
	char stringg[] = "UYW Eygv YUGyyv fuyYV UYYFy vfTRDRsrR RSrGhJUIG yufUYC";
	printf("\n");
	passme(stringg);
	return 0;
}

void passme(char *gotit)
{
	int i = 0;
	printf("Address of recieved string is: %ld\n", gotit);
	for(i; *(gotit + i) != '\0'; i++)
	{
		printf("%c", *(gotit + i));
	}
	printf("\n");
}
