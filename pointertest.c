#include<stdio.h>
int main(int **argv,int *argc[])
{
   // int num = *argc[1];
    int arr[10];
    int i = 0;
    for( i = 0; i <= 9; i++)
    {
        arr[i] = i;
    }

    int t = 0;
    while(t <= 9)
    {
        printf("%d  ",arr[t]);
        t++;
    }
    printf("\n\n");

    int *point;
    point = arr;
    
    int index = 0;
    while(index <= 9)
    {
        printf("%d  ",*(arr+index));
        index++;
    }
    printf("\n");
}
