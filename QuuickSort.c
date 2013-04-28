/////////////////////////////////////////////////////////////////////////////// 
// Quick-Sort.c
// Program demonstrates divide and conquer programming strategy.
// Programmer: Kapil Sunil Zad
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
//#include<conio.h> 
 
int partition(int *a, int left, int right, int pivotIndex)
{
    int pivotValue, storeIndex, temp, i ;
    pivotValue = a[pivotIndex];
    storeIndex = left;

    printf("PivotValue:%d\n", pivotValue);

    printf("{");
    for(i=left; i<=right; i++)
        printf("%d ", a[i]);
    printf("}  =>  ");

    // Move pivot to end 
    temp = a[pivotIndex];
    a[pivotIndex] = a[right];
    a[right] = temp;
    for(i=left; i<right; i++) 
    {
        if(a[i] <= pivotValue)     
        {
            temp = a[i];
            a[i] = a[storeIndex];
            a[storeIndex] = temp;
            storeIndex++; 
        }
    }
    // Move pivot to its final place  
    temp = a[storeIndex]; 
    a[storeIndex] = a[right];
    a[right] = temp;

    printf("{");
    for(i = left; i<storeIndex; i++)
        printf("%d ", a[i]);
    printf(" } < %d < { ", a[storeIndex]);
    for(i = storeIndex+1; i<=right; i++)
        printf("%d ", a[i]);
    printf("}\n\n");
    return storeIndex;
} 
/////////////////////////////////////////////////////////////////////////////// 
 
void kuicksort(int *a, int left, int right)
{
    int pivotIndex, newpivotIndex;
    if(right > left)
    {
        pivotIndex = left+(right-left)/2;
        newpivotIndex = partition(a, left, right, pivotIndex);
        kuicksort(a, left, newpivotIndex-1);
        kuicksort(a, newpivotIndex+1, right); 
    }
} 
/////////////////////////////////////////////////////////////////////////////// 
 
int main(void)
{
    int n, *k, i;
    //clrscr();

    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    k = (int*) malloc(sizeof(int) * n);

    printf("\nEnter the elements...\n");
    for (i = 0; i < n; i++) 
    {
        printf("[%d]: ", i);
        scanf("%d", k+i); 
    }

    kuicksort(k, 0, n-1);

    printf("\nAfter sorting...\n");
    for (i = 0; i<n; i++)
        printf("%d ", k[i]);

    free(k);
    //getch();
    return 0;
}
///////////////////////////////////////////////////////////////////////////////
 
