#include<stdio.h>
int main(int argc, char *argv)
{
    int arr[] = {0, 1, 2};
    int i = 0;
    while(i <= 2)
    {
        printf("%d",*(arr + i));
        i++;
    }
}
