#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    if (n == 0) {
        return 0;   // base case
    } else {
        return (n % 10) + sumOfDigits(n / 10);  // recursive step
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        num = -num; 
    }

    printf("Sum of digits = %d\n", sumOfDigits(num));

    return 0;
}
