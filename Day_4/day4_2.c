#include <stdio.h>

// Function to calculate nth Fibonacci term
int fibonacci(int n) {
    if (n == 0) return 0;        // base case
    else if (n == 1) return 1;   // base case
    else return fibonacci(n-1) + fibonacci(n-2); // recursive relation
}

int main() {
    int n;

    printf("Enter the position (n): ");
    scanf("%d", &n);

    printf("The %dth Fibonacci term is: %d\n", n, fibonacci(n));

    return 0;
}
