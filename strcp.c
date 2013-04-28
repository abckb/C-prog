#include<stdio.h>

int scmp(char *, char *);

int main()
{
    char strA[] = {'a', 'b', 'c', '\0'};
    char strB[] = {'z', '2', '3', '\0'};

    char *a = strA;
    char *b = strB;
    int cmp = scmp(a, b);

    if(cmp == 0)
        printf("The two strings are same\n");
    else if(cmp <= 0)
        printf("First string is lexicographically less than second\n");
    else
        printf("First string is lexicographically greater than the second\n");

    return 0;
}


int scmp(char *first, char *second)
{
    for( ; *first == *second; first++,second++)
        if(*first == '\0')
            return 0;
    return(*first - *second);
}
