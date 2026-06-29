#include <stdio.h>
int main() {
    int arr[50], n, choice, i, sum=0;

    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++) scanf("%d",&arr[i]);

    while(1) {
        printf("\n--- Array Menu ---\n");
        printf("1. Display\n2. Sum\n3. Reverse\n4. Exit\n");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                for(i=0;i<n;i++) printf("%d ",arr[i]);
                printf("\n");
                break;
            case 2:
                sum=0;
                for(i=0;i<n;i++) sum+=arr[i];
                printf("Sum = %d\n",sum);
                break;
            case 3:
                printf("Reversed array: ");
                for(i=n-1;i>=0;i--) printf("%d ",arr[i]);
                printf("\n");
                break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
