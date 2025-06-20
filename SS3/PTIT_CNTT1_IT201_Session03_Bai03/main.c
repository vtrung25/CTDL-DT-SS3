#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int size;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    if (size < 0)
    {
        printf("Invalid Input");
        return 1;
    }
    for (int i = 0; i < size; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", arr+i);
    }
    int  count = 0;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2 == 0)
        {
            sum += arr[i];
            count++;
        }
    }
    int avg = sum/count;
    printf("avg = %d", avg);
    free(arr);
    return 0;
}

