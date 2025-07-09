#include <stdio.h>
int euclideanGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int extendedEuclidean(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1;
        *y = 0;
        return a;
    }

    int x1, y1;
    int gcd = extendedEuclidean(b, a % b, &x1, &y1);

    *x = y1;
    *y = x1 - (a / b) * y1;

    return gcd;
}

int main() {
    int a, b, gcd, x, y;

    printf("Enter two integers a and b: ");
    scanf("%d %d", &a, &b);

    gcd = euclideanGCD(a, b);
    printf("GCD of %d and %d using Euclidean Algorithm = %d\n", a, b, gcd);

    gcd = extendedEuclidean(a, b, &x, &y);
    printf("GCD = %d, Coefficients x = %d, y = %d such that %d*%d + %d*%d = %d\n",
            gcd, x, a, y, b, x * a + y * b);

    return 0;
}

