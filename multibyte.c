#include<stdio.h>
#include<stddef.h>
#include<stdlib.h>
int main()
{
    wchar_t chr = L'\x3b1';
    printf("%c", chr);
    fprintf(stderr, "%s: this is no good\n");
    _Bool i = true;
    printf("%d", i);
}
