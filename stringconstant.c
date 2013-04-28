#include<stdio.h>
#include<ctype.h>
int main()
{
    char stringconstant[] = "This is a string constant";
    int i;
    
    for(i = 0; *(stringconstant + i) != '\0'; i++)
        printf("%c", *(stringconstant + i));
    
    printf("\n");
    
    for(i = 0; (*(stringconstant + i) = toupper(*(stringconstant + i))) != '\0'; i++)
        printf("%c", *(stringconstant + i));
    
    printf("\n");

    return 0;
}
