/* Program to demonstrate the famous Quicksort
 * algorithm. This particular version of the
 * implementation assumes the last element
 * of the array as pivot element. Author:
 * Kusan Biswas */

#include<stdio.h>

int split(int *, int , int );   /* The declarations */
void swap(int *, int *);
void QuickSort(int *, int, int);

int main()
{
    int num;
    puts("How many numbers to sort? :");
    scanf("%d",&num);
    int arr[num];

    printf("Enter %d numbers:\n",num);
    int i = 0;
    for(i = 0; i <= (num - 1); i++)
        scanf("%d",(arr + i));

    puts("You entered:");
    for(i = 0; i <= num-1 ; i++)
        printf("%d  ",*(arr + i));
    printf("\n");

    QuickSort(arr, 0, num-1);      //call the QuickSort() on our array.

    puts("=========== sorted numbers ============");
    printf("\n");
    for(i = 0; i <= num-1; i++)
        printf("%d ", *(arr + i));
    printf("\n");

    return 0;
}

////////////////////////////////////////////////////////////////

void QuickSort(int *array, int start, int end)
{
    if (start < end)
    {
        int divider = split(array, start, end);    //Call the partitioner to place the pivot element at
        QuickSort(array, start, (divider - 1));	//its correct place. Here, the end element is the pivot
        QuickSort(array, (divider + 1), end);
    }
}

////////////////////////////////////////////////////////////////

int split(int *array, int start, int end)      //the workhorse of quicksort algorithm.
{						//it places an element at its correct place.
    int pivot = *(array + end);
    int i = start - 1;
    int j = 0;
    for(j = start; j <= (end - 1); j++)
    {
        if(*(array + j) <= pivot)
        {
            i = i + 1;
            swap((array + i), (array + j));
        }
    }
    i = i + 1;
    swap((array + i), (array + end));
    return i ;
}

/////////////////////////////////////////////////////////////////

void swap(int *first, int *second)
{
    int temp;
    temp = *first;
    *first = *second;
    *second = temp;
}
///////////////////////////// END! //////////////////////////////
