#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int freq1[256] = {0}, freq2[256] = {0};

    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    if(strlen(s1) != strlen(s2)) {
        printf("Strings are not anagrams\n");
        return 0;
    }

    for(int i=0; s1[i]!='\0'; i++) {
        freq1[(int)s1[i]]++;
        freq2[(int)s2[i]]++;
    }

    for(int i=0; i<256; i++) {
        if(freq1[i] != freq2[i]) {
            printf("Strings are not anagrams\n");
            return 0;
        }
    }

    printf("Strings are anagrams\n");
    return 0;
}
