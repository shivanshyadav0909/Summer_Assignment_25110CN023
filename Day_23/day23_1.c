#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    gets(str);

    for(int i=0; str[i]!='\0'; i++) {
        int count = 0;
        for(int j=0; str[j]!='\0'; j++) {
            if(str[i] == str[j])
                count++;
        }
        if(count == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found\n");
    return 0;
}
