#include <stdio.h>

int main() {
    int a, b, m;
    int found = 0;

    printf("Solve linear congruence ax = b (mod m)\n");
    printf("Enter a, b, and m: ");
    scanf("%d %d %d", &a, &b, &m);

    for (int x = 0; x < m; x++) {
        if ((a * x) % m == b % m) {
            printf("Solution found: x = %d\n", x);
            found = 1;
            break; 
        }
    }

    if (!found) {
        printf("No solution exists.\n");
    }

    return 0;
}

