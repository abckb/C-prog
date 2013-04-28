#include<stdio.h>
void copy(char *, char *);

int main()
{
    char str1[0];
    char *str2 = "The C Programming Language";

    copy(str1, str2);
    
    printf("%s",str1);
    return (0);
}

void copy(char *a, char *b)
{
    while(*a++ = *b++)
        ;
}
