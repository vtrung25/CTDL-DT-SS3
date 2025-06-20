#include <stdio.h>
#include <stdlib.h>
int tinhTong(int rows, int cols)
{
    int **matrix = (int **) malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = (int *) malloc(cols * sizeof(int));
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("arr[%d][%d] = \n", i, j);
            scanf("%d", &matrix[i][j]);
        }

    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    int k;
    int sum = 0;
    printf("Nhap so hang muon tinh tong: ");
    scanf("%d", &k);
    if (k>0 && k<=rows)
    {
        for (int i = 0; i < rows; i++)
        {
            if (i == k-1)
            {
                for (int j = 0; j < cols; j++)
                {
                    sum += matrix[i][j];
                }
            }
        }
        printf("Tong can tinh: %d", sum);
    }else
    {
        printf("Hang can tinh khong hop le");
    }

}

int main(void)
{
    int rows, cols;
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);
    tinhTong(rows, cols);
    return 0;
}