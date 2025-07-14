#include <stdio.h>
int exists(int set[], int size, int elem);
void display(int set[], int size);

int main() {
    int A[50], B[50];
    int unionset[100], intersection[50], difference[50], symmetricDiff[100];
    int sizeA, sizeB, unionSize = 0, interSize = 0, diffSize = 0, symSize = 0;
    int i;

    printf("Enter number of elements in Set A: ");
    scanf("%d", &sizeA);
    printf("Enter elements of Set A:\n");
    for (i = 0; i < sizeA; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter number of elements in Set B: ");
    scanf("%d", &sizeB);
    printf("Enter elements of Set B:\n");
    for (i = 0; i < sizeB; i++) {
        scanf("%d", &B[i]);
    }

    for (i = 0; i < sizeA; i++) {
        unionset[unionSize++] = A[i];
    }
    for (i = 0; i < sizeB; i++) {
        if (!exists(A, sizeA, B[i])) {
            unionset[unionSize++] = B[i];
        }
    }

    for (i = 0; i < sizeA; i++) {
        if (exists(B, sizeB, A[i])) {
            intersection[interSize++] = A[i];
        }
    }

    for (i = 0; i < sizeA; i++) {
        if (!exists(B, sizeB, A[i])) {
            difference[diffSize++] = A[i];
        }
    }

    for (i = 0; i < sizeA; i++) {
        if (!exists(B, sizeB, A[i])) {
            symmetricDiff[symSize++] = A[i];
        }
    }
    for (i = 0; i < sizeB; i++) {
        if (!exists(A, sizeA, B[i])) {
            symmetricDiff[symSize++] = B[i];
        }
    }

    printf("\nUnion: ");
    display(unionset, unionSize);

    printf("Intersection: ");
    display(intersection, interSize);

    printf("Difference (A - B): ");
    display(difference, diffSize);

    printf("Symmetric Difference: ");
    display(symmetricDiff, symSize);

    return 0;
}

int exists(int set[], int size, int elem) {
    int i;
    for (i = 0; i < size; i++) {
        if (set[i] == elem) {
            return 1;
        }
    }
    return 0;
}

void display(int set[], int size) {
    int i;
    printf("{ ");
    for (i = 0; i < size; i++) {
        printf("%d ", set[i]);
    }
    printf("}\n");
}

                
