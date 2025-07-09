#include <stdio.h>
int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}
int decimalToBinary(int decimal) {
    int binary = 0, base = 1;
    while (decimal > 0) {
        int rem = decimal % 2;
        binary += rem * base;
        base *= 10;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int bin1, bin2;

    printf("Enter first binary number: ");
    scanf("%d", &bin1);

    printf("Enter second binary number: ");
    scanf("%d", &bin2);

    int dec1 = binaryToDecimal(bin1);
    int dec2 = binaryToDecimal(bin2);

    int sum = dec1 + dec2;
    int product = dec1 * dec2;

    int binSum = decimalToBinary(sum);
    int binProduct = decimalToBinary(product);

    printf("Binary Addition: %d + %d = %d\n", bin1, bin2, binSum);
    printf("Binary Multiplication: %d * %d = %d\n", bin1, bin2, binProduct);

    return 0;
}

