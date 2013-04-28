#include<stdio.h>

int main()
{
    int num;
    puts("Enter a number: ");
    scanf("%d",&num);

    int *integer;
    if(num == 10)
    {
        integer =(int *)malloc(10*sizeof(int));
    }
    else
    {
        puts("B'bye\n");
    }
}
