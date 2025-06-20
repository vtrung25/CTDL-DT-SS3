#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms you want to enter: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    };
    int maxItem = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxItem)
        {
            maxItem = arr[i];
        }
    }
    printf("Gia tri phan tu lon nhat trong mang: %d", maxItem);
}