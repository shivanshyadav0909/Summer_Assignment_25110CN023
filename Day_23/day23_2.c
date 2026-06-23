#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    gets(str);

    for(int i=0; str[i]!='\0'; i++) {
        for(int j=i+1; str[j]!='\0'; j++) {
            if(str[i] == str[j]) {
                printf("First repeating character: %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No repeating character found\n");
    return 0;
}
