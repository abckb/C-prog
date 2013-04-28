#include<stdio.h>
void swap(int *, int *);

int main()
{
    int *a = 100;
    int *b = 200;
    printf("\nBefore swap():\n");
    printf("Address of a and b are: %ld  %ld\n", &a, &b);
    printf("a = %d b = %d \n\n", *a, *b);
    
    printf("After swap(): \n");
    swap(a, b);
    printf("a = %d b = %d \n\n", a, b);
}

void swap(int *a, int *b)
{
    printf("Address of a and b are: %ld  %ld\n", a, b);
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
