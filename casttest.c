#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *integer;
    printf("%ld\n",(integer = (int *)malloc(sizeof(int))));
    *integer = 100009;
    printf("%d\n", *integer);
    printf("Address is: %ld\n", integer);
}
