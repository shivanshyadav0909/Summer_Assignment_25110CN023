#include <stdio.h>
#include <string.h>
int main() {
    char str[200];
    printf("Enter a sentence: ");
    gets(str);

    int words = 0;
    for(int i=0; str[i]!='\0'; i++) {
        if(str[i]==' ' && str[i+1]!=' ' && str[i+1]!='\0')
            words++;
    }
    words++; // last word

    printf("Number of words = %d\n", words);
    return 0;
}
