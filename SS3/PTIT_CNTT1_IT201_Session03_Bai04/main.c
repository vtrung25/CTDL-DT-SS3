#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int rows, cols;
    const int MIN_INF = -100000;
    const int MAX_INF = 100000;
    do
    {
        printf("Nhap vao so cot = \n");
        scanf("%d", &rows);
    }while (rows < 0 || rows > 100);
    do
    {
        printf("Nhap vao so hang = \n");
        scanf("%d", &cols);
    }while (cols < 0 || cols > 100);
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
    int max = MIN_INF, min = MAX_INF;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] < min)
            {
                min = matrix[i][j];
            }
            if (matrix[i][j] > max)
            {
                max = matrix[i][j];
            }
        }
    }
    printf("Gia tri lon nhat la: %d", max);
    printf("\n");
    printf("Gia tri nho nhat la: %d", min);
    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
