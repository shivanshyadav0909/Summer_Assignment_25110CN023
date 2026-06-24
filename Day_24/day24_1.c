#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    if(strlen(s1) != strlen(s2)) return 0;

    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1); // concatenate string with itself

    return strstr(temp, s2) != NULL;
}

int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    if(isRotation(s1, s2))
        printf("Strings are rotations of each other\n");
    else
        printf("Strings are not rotations\n");

    return 0;
}
