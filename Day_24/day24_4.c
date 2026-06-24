#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0};
    printf("Enter a string: ");
    gets(str);

    printf("String without duplicates: ");
    for(int i=0; str[i]!='\0'; i++) {
        if(freq[(int)str[i]] == 0) {
            printf("%c", str[i]);
            freq[(int)str[i]] = 1;
        }
    }
    return 0;
}
