#include <stdio.h>

int isPerfect(int n) {
    int sum = 0;
    for(int i = 1; i < n; i++)
        if(n % i == 0) sum += i;
    return sum == n;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(isPerfect(n)) printf("Perfect Number\n");
    else printf("Not Perfect Number\n");
    return 0;
}
