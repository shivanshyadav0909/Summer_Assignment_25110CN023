#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, base = 1, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    // Convert binary to decimal
    while (binary > 0) {
        remainder = binary % 10;   // get last digit
        decimal += remainder * base;
        binary /= 10;
        base *= 2;
    }

    printf("Decimal representation: %d\n", decimal);

    return 0;
}
