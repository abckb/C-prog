#include<stdio.h>
void reverse(void);

int main()
{
    printf("Enter text");
    printf("\n");
    reverse();
    printf("\n");
}

reverse(void)
{
    int c;
    if((c = getchar()) != "\n")
        reverse();
    putchar(c);
}
