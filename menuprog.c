#include<stdio.h>
#include<stdlib.h>

int factorial(int *);   //calculates factorial of the passed integer.
int fibo(int);    //calculates fibonacci series upto nth term

int main()
{
    int num = 0;
    int fact = 0;
    int option;
    printf("Type '1' for factorial or '2' for fibonacci, then press 'Return': ");
    scanf("%d",&option);
    
    switch(option)
    {
        case (1) :
            {
                printf("Enter number to find factorial: ");
                scanf("%d",&num);
                fact = factorial(&num);
                printf("Factorial of %d is %d : \n", num, fact);
                return 0;
            }
        case (2) :
            {
                printf("Enter limit : ");
                scanf("%d",&num);
                fibo(num);
                return 0;
            }
    }
}


int factorial(int *n)
{
    int num = *n;
    int i = num - 1;
    if(num == 0 || num == 1)
        return 1;

    while(i > 1)
    {
        num = num * i;
        i--;
    }
    return num;
}

int fibo(int n)
{
    int a = 0;
    int b = 1;
    int c;
    while(a < n)
    {
        printf("%d ",a);
        c = a;
        a = b;
        b = c + b;
    }
    printf("\n\n");
}
