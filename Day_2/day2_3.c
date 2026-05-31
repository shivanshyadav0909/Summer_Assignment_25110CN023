#include <stdio.h>

int main() {
    int num, product = 1, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    // Special case: if number is 0
    if (num == 0) {
        product = 0;
    } else {
        while (num != 0) {
            remainder = num % 10;       
            product *= remainder;       
            num /= 10;                 
        }
    }

    printf("Product of digits = %d\n", product);

    return 0;
}
