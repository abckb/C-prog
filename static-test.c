#include<stdio.h>

//int a;
void fun(void);

int main()
{
    static int a = 200;
    fun();
    printf("In main() a = %d\n", a);
    return 0;
}

void fun(void)
{
    static int a = 100;
    a += 50;
    printf("In fun() a = %d\n", a);
}
