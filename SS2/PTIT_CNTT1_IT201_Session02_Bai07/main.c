#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu %d cua mang:", i + 1);
        scanf("%d", &arr[i]);
    }
    int a;
    int flag = 0;
    int item1;
    int item2;
    printf("Nhap 1 so nguyen bat ki:");
    scanf("%d", &a);
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] + arr[j] == a)
            {
                flag = 1;
                item1 = arr[i];
                item2 = arr[j];
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (flag == 1)
    {
        printf("Cap so tim thay la %d, %d", item1, item2);
    }else
    {
        printf("Khong tim thay");
    }
}