#include <stdio.h>

#define SIZE 3  
void inputMatrix(int matrix[SIZE][SIZE], const char *name) {
    printf("Enter elements of matrix %s (%dx%d) (only 0 or 1):\n", name, SIZE, SIZE);
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            scanf("%d", &matrix[i][j]);
}

void displayMatrix(int matrix[SIZE][SIZE], const char *title) {
    printf("%s:\n", title);
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }
    printf("\n");
}

void joinMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            result[i][j] = A[i][j] || B[i][j];
}

void meetMatrix(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            result[i][j] = A[i][j] && B[i][j];
}

void booleanProduct(int A[SIZE][SIZE], int B[SIZE][SIZE], int result[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = 0;
            for (int k = 0; k < SIZE; k++)
                result[i][j] = result[i][j] || (A[i][k] && B[k][j]);
        }
}

int main() {
    int A[SIZE][SIZE], B[SIZE][SIZE];
    int join[SIZE][SIZE], meet[SIZE][SIZE], product[SIZE][SIZE];

    inputMatrix(A, "A");
    inputMatrix(B, "B");

    joinMatrix(A, B, join);
    meetMatrix(A, B, meet);
    booleanProduct(A, B, product);

    displayMatrix(A, "Matrix A");
    displayMatrix(B, "Matrix B");
    displayMatrix(join, "Join (A OR B)");
    displayMatrix(meet, "Meet (A AND B)");
    displayMatrix(product, "Boolean Product (A * B)");

    return 0;
}

