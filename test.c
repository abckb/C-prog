//ISI sample question 2012

#include<stdio.h>

#define MUL(a,b) a*b
#define POW(a) a*a

int main()
{
    int a = 3;
    int b = 2;
    printf("POW(b+1) = %d\n", POW(b+1));
    printf("MUL(a+1, b) = %d\n", MUL(a+1, b));
    printf("Ans: %d\n", MUL (MUL(a+1, b), POW(b+1)));
    return 0;
}
