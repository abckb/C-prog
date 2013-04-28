#include<stdio.h>
main()
{
    int arr[10];
    int i = 0;
    int min = 0;
    int max = 0;

    printf("Enter the numbers\n");
    for(i = 0;i<=9;i++)
        scanf("%d",&arr[i]);

    printf("You entered: ");
    for(i = 0;i<=9;i++)
        printf("%d ",arr[i]);
    printf("\n");

    for(i = 0;i <= 9;i++)
    {
        if(min > arr[i])
            min = arr[i];
    }

    
    for(i = 0;i <= 9;i++)
    {
        if(max < arr[i])
            max = arr[i];
    }

    printf("Minimum = %d\nMaximum = %d\n",min,max);

}
