/* A program to demonstrate function returning pointer */

#include<stdio.h>
#include<ctype.h>
char *callee(char *);

int main()
{
    int i = 0;
    char str[] = "AbCd EfGh iJkL mNoP";
    printf("\nIn main(), address is: %ld\n\n", str);
    
    char *returned;
    returned = callee(str);

    printf("Returned address is: %ld\n", returned);
    for(i = 0; *(returned + i) != '\0'; i++)
    {
        printf("%c", *(returned + i));
    }

    return 0;
}

char *callee(char *str)
{
    printf("In callee(), address is: %ld\n", str);

    int i;
    for(i = 0; *(str + i) != '\0'; i++)
    {
        *(str + i) = tolower(*(str + i));
    }

    return str;
}
