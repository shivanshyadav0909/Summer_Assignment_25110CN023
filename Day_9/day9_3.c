#include <stdio.h>

int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    // Repeated character pattern
    for (int i = 1; i <= n; i++) {
        char ch = 'A' + i - 1;   // character for this row
        for (int j = 1; j <= i; j++) {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
