#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle 0 separately
    if (num == 0) {
        count = 1;
    } else {
        // Work with positive numbers
        if (num < 0) {
            num = -num;  // make it positive
        }
        while (num != 0) {
            num /= 10;   // remove last digit
            count++;     // increase count
        }
    }

    printf("Number of digits = %d\n", count);

    return 0;
}
