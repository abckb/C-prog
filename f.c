#include<stdio.h>
int func(int, int *, int **);

int main()
{
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    printf("%d", func(c, b, a));
}

int func(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1; z = **ppz;
    *py += 2; y = *py;
    x += 3;
    return x + y + z;
}
