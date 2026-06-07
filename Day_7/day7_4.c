#include <stdio.h>

// Recursive function to reverse a number
int reverseNumber(int num, int rev) {
    if (num == 0) {
        return rev;   // base case: return the reversed number
    } else {
        return reverseNumber(num / 10, rev * 10 + (num % 10));
    }
}

int main() {
    int num, reversed;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    if (num < 0) {
        reversed = -reverseNumber(-num, 0);
    } else {
        reversed = reverseNumber(num, 0);
    }

    printf("Reversed number = %d\n", reversed);

    return 0;
}
