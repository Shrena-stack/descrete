#include <stdio.h>

void printCombination(int comb[], int r) {
    for (int i = 0; i < r; i++) {
        printf("%d ", comb[i]);
    }
    printf("\n");
}

int nextCombination(int comb[], int n, int r) {
    int i = r - 1;
    while (i >= 0 && comb[i] == n - r + i)
        i--;

    if (i < 0)
        return 0; 
        
    comb[i]++;

    for (int j = i + 1; j < r; j++)
        comb[j] = comb[j - 1] + 1;

    return 1;
}

int main() {
    int n, r;
    printf("Enter n (size of set): ");
    scanf("%d", &n);
    printf("Enter r (number of elements in combination): ");
    scanf("%d", &r);
    if (r > n || r <= 0 || n <= 0) {
        printf("Invalid input. Ensure 0 < r <= n.\n");
        return 1;
    }

    int comb[100];
    for (int i = 0; i < r; i++)
        comb[i] = i;

    printf("Combinations in lexicographic order:\n");

    do {
        printCombination(comb, r);
    } while (nextCombination(comb, n, r));

    return 0;
}

