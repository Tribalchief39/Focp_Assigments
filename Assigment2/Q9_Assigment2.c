#include <stdio.h>

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    
    int marks[num_students];

    for (int i = 0; i < num_students; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < num_students; i++) {
        if ((i == 0 || marks[i] >= marks[i - 1]) && (i == num_students - 1 || marks[i] >= marks[i + 1])) {
            printf("Peak element found: %d at index %d\n", marks[i], i);
            return 0;
        }
    }
    printf("No peak element found.\n");
    return 0;
}
