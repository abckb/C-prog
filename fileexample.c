#include<stdio.h>
#include<stdlib.h>

FILE *fp;

int main()
{
    char filename[15];
    int inchar;
    printf("Enter the filename u want to see: ");
    gets(filename);

    if((fp = fopen(filename, "rb")) == NULL)
    {
        printf("\n\n**** file does not exist ****\n");
        exit(1);
    }

    while(!feof(fp))
    {
        inchar = getc(fp);
        putchar(inchar);
    }

    fclose(fp);
    return 0;
}