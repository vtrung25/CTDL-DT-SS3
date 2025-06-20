#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Nhap so luong phan tu cua mang:");
    scanf("%d", &n);
    if (n<0)
    {
        return 1;
    }
    int *arr;
    arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu cua mang %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    int max;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("max = %d\n", max);
    free(arr);
    return 0;
}
