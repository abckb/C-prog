#include<stdio.h>
#include<stdlib.h>

char *lineget(char *, int);

int main()
{
    FILE *fp;
    char *line;
    fp = fopen("text.txt", "w");
    if(fp != NULL)
    {
        puts("File opened successfully, now writing");
        while(lineget(line, 15) != NULL)
        {
            puts(line);
        }
    }
    fclose(fp);
}

char *lineget(char *line, int max)
{
    if(fgets(line, max, stdin) == NULL)
        return NULL;
    else
        return line;
}
