#include <stdio.h>
int main()
{
    int n;
    printf("Nhap so luong so nguyen trong mang: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int a;
    int count = 0;
    printf("Nhap so nguyen muon kiem  tra: ");
    scanf("%d",&a);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == a)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("So nguyen nhap vao khong co trong mang");
    }else
    {
        printf("Co %d so nguyen %d xuat hien trong mang", count, a);
    }
}