#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    // Using loop to calculate sum
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("Sum of first %d natural numbers is: %d\n", n, sum);

    return 0;
}
