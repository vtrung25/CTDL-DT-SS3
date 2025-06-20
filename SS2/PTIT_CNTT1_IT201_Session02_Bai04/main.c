#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int pos;
    printf("Enter the position: ");
    scanf("%d", &pos);
    int val;
    printf("Enter the value: ");
    scanf("%d", &val);
    arr[pos] = val;
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
}