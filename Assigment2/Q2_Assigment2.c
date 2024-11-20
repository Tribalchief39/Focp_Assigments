#include <stdio.h>

void print_grade(float mark) {
    if (mark >= 75) {
        printf("A Grade\n");
    } else if (mark >= 60) {
        printf("B Grade\n");
    } else if (mark >= 40) {
        printf("C Grade\n");
    } else {
        printf("D Grade\n");
    }
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
    
    printf("Grades of the students:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d: ", i + 1);
        print_grade(marks[i]);
    }

    return 0;
}
