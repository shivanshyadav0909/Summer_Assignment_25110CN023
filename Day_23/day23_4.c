#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int freq[256] = {0};

    printf("Enter a string: ");
    gets(str);

    for(int i=0; str[i]!='\0'; i++)
        freq[(int)str[i]]++;

    int max = 0;
    char ch;

    for(int i=0; i<256; i++) {
        if(freq[i] > max) {
            max = freq[i];
            ch = i;
        }
    }

    printf("Maximum occurring character: %c (%d times)\n", ch, max);
    return 0;
}
