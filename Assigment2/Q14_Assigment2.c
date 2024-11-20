#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    int duplicates[n];
    int count = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                int alreadyExists = 0;
                for (int k = 0; k < count; k++) {
                    if (duplicates[k] == arr[i]) {
                        alreadyExists = 1;
                        break;
                    }
                }
                if (!alreadyExists) {
                    duplicates[count++] = arr[i];
                }
                break;
            }
        }
    }

    if (count == 0) {
        printf("-1\n");
    } else {
        printf("Duplicates: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", duplicates[i]);
        }
        printf("\n");
    }

    return 0;
}