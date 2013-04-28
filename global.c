#include<stdio.h>

int global = 100;
void call(void);

int main()
{
    static int global = 300;
    printf("In main, global = %d\n", global);
    global = 200;
    call();
    return 0;
}

void call()
{
    printf("In call, global = %d\n", global);
}
