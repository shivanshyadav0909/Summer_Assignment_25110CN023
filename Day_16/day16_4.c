#include <stdio.h>
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int newArr[n], k = 0;
    for(int i = 0; i < n; i++) {
        int found = 0;
        for(int j = 0; j < k; j++) {
            if(arr[i] == newArr[j]) {
                found = 1;
                break;
            }
        }
        if(!found) newArr[k++] = arr[i];
    }

    printf("Array after removing duplicates:\n");
    for(int i = 0; i < k; i++) printf("%d ", newArr[i]);
    return 0;
}
