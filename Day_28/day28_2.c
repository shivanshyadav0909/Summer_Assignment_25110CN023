#include <stdio.h>
struct Account {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Account a;
    int choice;
    float amt;

    printf("Enter Account Number, Name, Initial Balance: ");
    scanf("%d %s %f", &a.accNo, a.name, &a.balance);

    while(1) {
        printf("\n--- Bank Menu ---\n");
        printf("1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter amount to deposit: ");
                scanf("%f", &amt);
                a.balance += amt;
                printf("Updated Balance = %.2f\n", a.balance);
                break;
            case 2:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amt);
                if(amt > a.balance)
                    printf("Insufficient Balance\n");
                else {
                    a.balance -= amt;
                    printf("Updated Balance = %.2f\n", a.balance);
                }
                break;
            case 3:
                printf("Current Balance = %.2f\n", a.balance);
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}
