#include <stdio.h>

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    
    int marks[num_students];
    int count = 0;

    for (int i = 0; i < num_students; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("Students who scored 99: ");
    for (int i = 0; i < num_students; i++) {
        if (marks[i] == 99) {
            printf("Student %d ", i + 1);
            count++;
        }
    }

    if (count == 0) {
        printf("None\n");
    } else {
        printf("\nTotal number of students who scored 99: %d\n", count);
    }

    return 0;
}
