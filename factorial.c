
#include<stdio.h>
#include"def.h"
//int factorial(int);
main()
{
    int num;
    int fac;
    printf("Enter number: ");
    scanf("%d",&num);
    
    fac = factorial(num);
    printf("Factorial of %d is: %d",num,fac);
}
