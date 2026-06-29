#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    int choice;

    printf("Enter a string: ");
    gets(str);

    while(1) {
        printf("\n--- String Menu ---\n");
        printf("1. Length\n2. Reverse\n3. Uppercase\n4. Exit\n");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                printf("Length = %d\n",(int)strlen(str));
                break;
            case 2:
                strcpy(rev,str);
                strrev(rev); // works in Turbo C, for GCC use manual loop
                printf("Reversed = %s\n",rev);
                break;
            case 3:
                for(int i=0;str[i]!='\0';i++)
                    if(str[i]>='a' && str[i]<='z')
                        str[i]=str[i]-32;
                printf("Uppercase = %s\n",str);
                break;
            case 4: return 0;
            default: printf("Invalid choice\n");
        }
    }
}
