#include <stdio.h>

int main() {
    int n, i = 2;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);

    while (n > 1) {
        if (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        } else {
            i++; 
        }
    }

    printf("\n");
    return 0;
}

