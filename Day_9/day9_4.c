#include <stdio.h>

int main() {
    int n;

    printf("Enter size of square: ");
    scanf("%d", &n);

    // Hollow square pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            // Print star at boundary, space inside
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}
