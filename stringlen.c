#include<stdio.h>

int length(char *);
int main(int argc, char *argv[])
{
    if(argc != 2)
        printf("Usage: ./a.out <string>\n");
    else
    {
        printf("length is: %d\n",length(argv[1]));
        printf("%s\n", argv[1]);
    }
}

int length(char *string)
{
    int length;
    for(n = 0; *string != '\0'; string++)
        n++;
    return length;
}
