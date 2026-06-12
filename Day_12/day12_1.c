#include <stdio.h>

int isPalindrome(int n) {
    int rev = 0, temp = n;
    while(temp != 0) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return rev == n;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(isPalindrome(n)) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    return 0;
}
