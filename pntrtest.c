#include<stdio.h>
void pass(int *);

int main()
{
    int i = 100;
    printf("Address: %ld\n",&i);
    pass(&i);
}

void pass(int *integer)
{
    printf("Address: %ld\n", integer);
    printf("Data is: %d\n", *integer);
}
