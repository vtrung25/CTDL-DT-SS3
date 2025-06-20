#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int rows, cols;
    do
    {
        printf("Nhap vao so hang: ");
        scanf("%d", &rows);
    }while(rows < 0 || rows > 100);
    do
    {
        printf("Nhap vao so cot: ");
        scanf("%d", &cols);
    }while(cols < 0 || cols > 100);
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
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < rows; i++)
    {
        sum1 += matrix[i][i];
    }
    printf("Tong duong cheo chinh : %d\n", sum1);
    if (rows == cols)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if (i+j == rows)
                {
                    sum2 += matrix[i][j];
                }
            }
        }
        printf("Tong duong cheo phu : %d\n",  sum2);
    }else
    {
        printf("Khong co duong cheo phu");
    }
    return 0;
}
