/* A program to reverse a string given as
 * command line argument. */

#include<stdio.h>
void reverse(char *);

int main(int argc, char *argv[])
{
    if (argc != 2)
        printf("usage: reverse <string>\n");
    else
    {
        printf("Address is : %ld in main()\n",argv[1]);
        reverse(argv[1]);
    }
}

void reverse(char *str)
{
    printf("address is : %ld\n", str);
}
