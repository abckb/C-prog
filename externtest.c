#include<stdio.h>

int external = 100;
void pass(void);

int main()
{
    printf("data: %d Address: %ld", external, &external);
    pass();
}

////////////////////////////////////////////

void pass()
{
    extern int external;
    printf("External variable = %d\n", external);
}
