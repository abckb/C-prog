#include<stdio.h>
int main()
{
    char character = 'A';

    switch(character){
        case 'A':
            printf("Choice A\n");
        case 'B':
            ;
        case 'C':
            printf("Choice C\n");
        case 'D':

        default:
            printf("This is the default case\n");

        }
    return(0);
}

