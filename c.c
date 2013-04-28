#include<stdio.h>
int main(int argc, char *argv[])
{
    int *integer;
    integer = (int *)malloc(sizeof(int));
    if(integer == NULL)
    {
        puts("Memory exhausted");
        return(-1);
    }
    else
        *integer = 10203040;
    printf("Address: %ld\nData: %d", integer, *integer);
    return(0);
}
