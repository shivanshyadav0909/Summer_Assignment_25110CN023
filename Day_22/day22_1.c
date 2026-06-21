#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);

    int len = strlen(str), flag = 1;
    for(int i=0; i<len/2; i++) {
        if(str[i] != str[len-1-i]) {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("String is palindrome\n");
    else
        printf("String is not palindrome\n");

    return 0;
}
