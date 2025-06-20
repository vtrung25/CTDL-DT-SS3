#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d trong mang:", i + 1);
        scanf("%d", &arr[i]);
    }
    int pos;
    printf("Nhap vi tri can them vao mang:");
    scanf("%d", &pos);
    if (pos > n)
    {
        printf("Vi tri khong hop le");
        return 0;
    }
    int item;
    printf("Nhap gia tri can them vao mang:");
    scanf("%d", &item);
    for (int i = n; i>pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = item;
    n++;
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}