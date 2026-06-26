#include <stdio.h>

int main() {
    int balance = 5000, choice, amount;

    while(1) {
        printf("\n--- ATM Menu ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Current Balance = %d\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ");
                scanf("%d", &amount);
                balance += amount;
                printf("Amount Deposited. New Balance = %d\n", balance);
                break;

            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%d", &amount);
                if(amount > balance)
                    printf("Insufficient Balance\n");
                else {
                    balance -= amount;
                    printf("Amount Withdrawn. New Balance = %d\n", balance);
                }
                break;

            case 4:
                printf("Thank you for using ATM.\n");
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}
