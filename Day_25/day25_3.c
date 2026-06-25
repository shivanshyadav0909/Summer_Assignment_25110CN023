#include <stdio.h>
#include <string.h>
int main() {
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    getchar(); // consume newline

    char names[n][50], temp[50];
    printf("Enter names:\n");
    for(int i=0;i<n;i++) gets(names[i]);

    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(strcmp(names[i], names[j]) > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("Sorted names:\n");
    for(int i=0;i<n;i++) printf("%s\n", names[i]);
    return 0;
}
