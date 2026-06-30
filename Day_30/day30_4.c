#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s[], int n) {
    printf("\n--- Student Records ---\n");
    for(int i=0; i<n; i++) {
        printf("Roll: %d, Name: %s, Marks: %.2f\n",
               s[i].roll, s[i].name, s[i].marks);
    }
}

void search(struct Student s[], int n, int roll) {
    for(int i=0; i<n; i++) {
        if(s[i].roll == roll) {
            printf("Record Found: %s - %.2f\n", s[i].name, s[i].marks);
            return;
        }
    }
    printf("Record not found\n");
}

int main() {
    struct Student s[50];
    int n, choice, roll;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(int i=0; i<n; i++) {
        printf("Enter Roll, Name, Marks: ");
        scanf("%d %s %f", &s[i].roll, s[i].name, &s[i].marks);
    }

    while(1) {
        printf("\n--- Menu ---\n");
        printf("1. Display Records\n");
        printf("2. Search by Roll\n");
        printf("3. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1: display(s, n); break;
            case 2:
                printf("Enter roll to search: ");
                scanf("%d", &roll);
                search(s, n, roll);
                break;
            case 3: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
