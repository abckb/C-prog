#include<stdio.h>
void abc(char *);

int main()
{
    abc("123");
    return 0;
}

void abc(char *s)
{
    if(s[0] == '\0')
        return;

    abc(s+1);
    abc(s+1);
    printf("%c", s[0]);
}
