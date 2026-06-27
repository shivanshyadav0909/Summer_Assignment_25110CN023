#include <stdio.h>
struct Student {
    int roll;
    char name[50];
    int marks[5];   // marks in 5 subjects
    int total;
    float percentage;
};

int main() {
    struct Student s;
    int i;

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);
    printf("Enter Name: ");
    scanf("%s", s.name);

    s.total = 0;
    printf("Enter marks of 5 subjects:\n");
    for(i=0; i<5; i++) {
        scanf("%d", &s.marks[i]);
        s.total += s.marks[i];
    }

    s.percentage = s.total / 5.0;

    printf("\n--- Marksheet ---\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    for(i=0; i<5; i++)
        printf("Subject %d: %d\n", i+1, s.marks[i]);
    printf("Total Marks: %d\n", s.total);
    printf("Percentage: %.2f%%\n", s.percentage);

    if(s.percentage >= 60)
        printf("Result: First Division\n");
    else if(s.percentage >= 45)
        printf("Result: Second Division\n");
    else if(s.percentage >= 33)
        printf("Result: Third Division\n");
    else
        printf("Result: Fail\n");

    return 0;
}
