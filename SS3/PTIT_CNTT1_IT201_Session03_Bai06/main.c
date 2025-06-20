#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    int size;
    printf("Enter number of elements: ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int newSize;
    printf("Enter number of elements: ");
    scanf("%d", &newSize);
    arr = (int *)realloc(arr, newSize * sizeof(int));
    for (int i = 0; i < newSize; i++)
    {
        printf("Enter element %d: ", i + 1 + size);
        scanf("%d", &arr[size+i]);
    }
    for (int i = 0; i < size+newSize; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
