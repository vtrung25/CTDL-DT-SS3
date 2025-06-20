#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *arr;
    arr = (int *)malloc(10 * sizeof(int));
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    free(arr);
    return 0;
}
