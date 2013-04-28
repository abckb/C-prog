#include<stdio.h>
int main()
{
    char a[6] = "world";
    printf("%s\n", a);
    int i, j, k = 5;
    for(i = 0, j = 5; i < j; a[i++] = a[k--])
        ;
    printf("%s\n", a);
}
