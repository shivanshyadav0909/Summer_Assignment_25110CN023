#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter n (range of numbers): ");
    scanf("%d", &n);
    int arr[n-1];
    printf("Enter %d elements:\n", n-1);
    for(int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    int total = n * (n + 1) / 2;
    printf("Missing number is: %d\n", total - sum);
    return 0;
}
