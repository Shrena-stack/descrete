#include <stdio.h>
#define MAX 50
void inputRelation(int relation[MAX][MAX], int n) {
    printf("Enter the relation matrix (%dx%d):\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &relation[i][j]);
        }
    }
}
int isReflexive(int relation[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        if (relation[i][i] != 1)
            return 0;
    }
    return 1;
}
int isSymmetric(int relation[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (relation[i][j] != relation[j][i])
                return 0;
        }
    }
    return 1;
}
int isAntisymmetric(int relation[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && relation[i][j] == 1 && relation[j][i] == 1)
                return 0;
        }
    }
    return 1;
}
int isTransitive(int relation[MAX][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (relation[i][j] == 1) {
                for (int k = 0; k < n; k++) {
                    if (relation[j][k] == 1 && relation[i][k] != 1)
                        return 0;
                }
            }
        }
    }
    return 1;
}
int main() {
    int relation[MAX][MAX], n;
    printf("Enter the number of elements in the set: ");
    scanf("%d", &n);
    inputRelation(relation, n);
    printf("\nRelation Properties:\n");
    printf("Reflexive: %s\n", isReflexive(relation, n) ? "Yes" : "No");
    printf("Symmetric: %s\n", isSymmetric(relation, n) ? "Yes" : "No");
    printf("Antisymmetric: %s\n", isAntisymmetric(relation, n) ? "Yes" : "No");
    printf("Transitive: %s\n", isTransitive(relation, n) ? "Yes" : "No");
    return 0;
}

