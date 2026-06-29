#include <stdio.h>
struct Item {
    int id;
    char name[50];
    int qty;
    float price;
};

int main() {
    struct Item items[50];
    int n, i;

    printf("Enter number of items: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        printf("Enter ID, Name, Quantity, Price: ");
        scanf("%d %s %d %f",&items[i].id, items[i].name, &items[i].qty, &items[i].price);
    }

    printf("\n--- Inventory ---\n");
    for(i=0;i<n;i++) {
        printf("ID: %d, Name: %s, Qty: %d, Price: %.2f, Total Value: %.2f\n",
               items[i].id, items[i].name, items[i].qty, items[i].price,
               items[i].qty * items[i].price);
    }
    return 0;
}
