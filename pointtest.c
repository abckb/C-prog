#include<stdio.h>
#include<ctype.h>
void passme(char *);

int main()
{
    int i = 0;
    char array[] = "QwErTyUiOpAsDfGhJkLZxcvVBNmNM";
    passme(array);
    printf("\n\n");

    for(i = 0; *(array + i) != '\0'; i++)
    {
        printf("%c",*(array + i));
    }
}

void passme(char *arr)
{
    int i = 0;
    for(i = 0; *(arr + i) != '\0'; i++)
    {
        printf("%c",*(arr + i) = toupper(*(arr + i)));
    }
}
