#include <stdio.h>

void scalarMultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar);
void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols]);

int main(void)
{
    int sampleMatrix[3][5] = {
        {4, 6, 7, 1, -1},
        {-11, 81, 2, 9, 4},
        {6, 12, 19, 7, 9}
    };

    printf("Sample Matrix:\n");
    displayMatrix(3, 5, sampleMatrix);

    scalarMultiply(3, 5, sampleMatrix, 5);

    printf("\nSample Matrix Multiplied by 5:\n");
    displayMatrix(3, 5, sampleMatrix);

    scalarMultiply(3, 5, sampleMatrix, -1);

    printf("\nNow Multiplied by -1:\n");
    displayMatrix(3, 5, sampleMatrix);

    return 0;
}

void scalarMultiply(int nRows, int nCols, int matrix[nRows][nCols], int scalar)
{
    for (int row = 0; row < nRows; row++)
        for (int col = 0; col < nCols; col++)
            matrix[row][col] *= scalar;
}

void displayMatrix(int nRows, int nCols, int matrix[nRows][nCols])
{
    for (int row = 0; row < nRows; row++) {
        for (int col = 0; col < nCols; col++)
            printf("%5i", matrix[row][col]);
        printf("\n");
    }
}