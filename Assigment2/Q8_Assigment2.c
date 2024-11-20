#include <stdio.h>
void findMinMax(float arr[], int n) {
    float min = arr[0];
    float max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
        else if (arr[i] > max)
            max = arr[i];
    }

    printf("Minimum score: %.2f\n", min);
    printf("Maximum score: %.2f\n", max);
}

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    
    float marks[num_students];

    for (int i = 0; i < num_students; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
    findMinMax(marks, num_students);
    
    return 0;
}
