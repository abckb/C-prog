#include<stdio.h>
int *getpointer(void);

int main()
{
    int *px;
    px = getpointer();
    *px = 100;
    printf("%d\n", *px);
    return 0;
}

int *getpointer(void)
{
    int *pt;
    pt = (int *)malloc(sizeof(int));
    return pt;
}
