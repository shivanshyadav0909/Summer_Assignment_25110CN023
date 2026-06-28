#include <stdio.h>
struct Ticket {
    int id;
    char name[50];
    int seats;
};

int main() {
    struct Ticket t;
    printf("Enter Ticket ID, Name, Number of Seats: ");
    scanf("%d %s %d", &t.id, t.name, &t.seats);

    printf("\n--- Ticket Details ---\n");
    printf("Ticket ID: %d\n", t.id);
    printf("Name: %s\n", t.name);
    printf("Seats Booked: %d\n", t.seats);

    return 0;
}
