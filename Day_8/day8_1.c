#include <stdio.h>

int main() {
    int n;
                                                              //pyramid problem solved by shivansh
    printf("Enter number of rows: ");
    scanf("%d", &n);

                                                              // Half pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
