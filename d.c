#include<stdio.h>
int main()
{
    int *A[10], B[10][10];
    int *integer = 1000;
    printf("%d\n", integer);
    A[2] = integer;
    B[2] = 2;
    printf("%d\n", *(A+2));
    //printf("%d\n", A[2][1]);
    printf("Done...\n");
}
