#include <stdio.h>

int main()
{
    int n;
    printf("Nhap so luong mang so nguyen: ");
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}