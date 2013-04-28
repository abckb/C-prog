#include<stdio.h>
#include"myheader.h"
int main()
{
    puts(AUTHOR);
    int a = 1010;
    int b = 9090;
    printf("a = %d and b = %d\n", a, b);
    printf("Addresss' of a and b are: %ld %ld\n\n", (long)&a, (long)&b);

    puts("<+++++++ after a call to swap() +++++++>");
    swap(&a, &b);

    printf("\na = %d and b = %d\n", a, b);
    printf("Addresss' of a and b are: %ld %ld\n\n",(long)&a, (long)&b);
}
