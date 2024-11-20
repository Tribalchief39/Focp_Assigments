#include <stdio.h>

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    
    int marks[num_students + 1];

    for (int i = 0; i < num_students; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("Array before insert: ");
    for (int i = 0; i < num_students; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    int position, value;
    printf("Enter the position to insert (1 to %d for front, %d to %d for between, %d for end): ", 1, num_students, num_students + 1);
    scanf("%d", &position);
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if (position < 1 || position > num_students + 1) {
        printf("Invalid position! Please enter a position between 1 and %d.\n", num_students + 1);
        return 1;
    }

    for (int i = num_students; i >= position - 1; i--) {
        marks[i] = marks[i - 1];
    }
    marks[position - 1] = value;
    num_students++;

    printf("Array after insert: ");
    for (int i = 0; i < num_students; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");

    return 0;
}
