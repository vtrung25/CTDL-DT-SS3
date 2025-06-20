#include <stdio.h>

int main(void)
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
    int maxCount = 0;
    int maxItem = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
        }
        if (count > maxCount)
        {
            maxCount = count;
            maxItem = arr[i];
        }
    }
    printf("Max item is %d", maxItem);
}