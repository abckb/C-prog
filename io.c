#include<stdio.h>
#include<ctype.h>

int main()
{
    int c;
    while((c = getchar()) != EOF)
        putchar(toupper(c));
    system("date");
    return 0;
}
