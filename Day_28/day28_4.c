#include <stdio.h>
struct Contact {
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[50];
    int n, i;

    printf("Enter number of contacts: ");
    scanf("%d", &n);

    for(i=0;i<n;i++) {
        printf("Enter Name and Phone: ");
        scanf("%s %s", c[i].name, c[i].phone);
    }

    printf("\n--- Contact List ---\n");
    for(i=0;i<n;i++) {
        printf("Name: %s, Phone: %s\n", c[i].name, c[i].phone);
    }
    return 0;
}
