#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap gia tri phan tu thu %d:", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n-1; i++)
    {
        if (arr[i] > arr[i+1])
        {
            printf("%d", arr[i]);
            printf("\t");
        }
    }
}