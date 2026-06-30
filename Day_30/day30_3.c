#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e[50];
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        printf("Enter ID, Name, Salary: ");
        scanf("%d %s %f", &e[i].id, e[i].name, &e[i].salary);
    }

    printf("\n--- Employee Records ---\n");
    for(int i=0; i<n; i++) {
        printf("ID: %d, Name: %s, Salary: %.2f\n",
               e[i].id, e[i].name, e[i].salary);
    }

    return 0;
}
