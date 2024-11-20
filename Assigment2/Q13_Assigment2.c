#include <stdio.h>

int main() {
    int num_elements;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &num_elements);
    
    int arr[num_elements];

    for (int i = 0; i < num_elements; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Array before rotation: ");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    if (num_elements > 1) {
        int last = arr[num_elements - 1];
        for (int i = num_elements - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }

    printf("Array after rotation: ");
    for (int i = 0; i < num_elements; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
