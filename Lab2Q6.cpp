#include <stdio.h>

int main() {
    int a1, m1, a2, m2;
    printf("Solve system:\n x = a1 (mod m1)\n x = a2 (mod m2)\n");
    printf("Enter a1, m1, a2, m2: ");
    scanf("%d %d %d %d", &a1, &m1, &a2, &m2);

    int limit = m1 * m2; 
    int found = 0;

    for (int x = 0; x < limit; x++) {
        if ((x % m1 == a1 % m1) && (x % m2 == a2 % m2)) {
            printf("Solution x = %d (mod %d)\n", x, limit);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("No solution found in range 0 to %d\n", limit - 1);
    }

    return 0;
}

