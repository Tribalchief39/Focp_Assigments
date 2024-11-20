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

    printf("Array before delete: ");
    for (int i = 0; i < num_students; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    int position;
    printf("Enter the position to delete (1 to %d for front, 2 to %d for between, %d for end): ", num_students, num_students, num_students);
    scanf("%d", &position);

    if (position < 1 || position > num_students) {
        printf("Invalid position!\n");
        return 1;
    }

    for (int i = position - 1; i < num_students - 1; i++) {
        marks[i] = marks[i + 1];
    }

    num_students--;

    printf("Array after delete: ");
    for (int i = 0; i < num_students; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    return 0;
}
