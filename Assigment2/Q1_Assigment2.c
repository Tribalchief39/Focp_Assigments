#include <stdio.h>

int main() {
    int num_students;
    
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    
    float marks[num_students];
    
    for (int i = 0; i < num_students; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
    
    printf("New marks are: ");
    for (int i = 0; i < num_students; i++) {
        marks[i] += 5;
        printf("%.2f ", marks[i]);
    }
    printf("\n");

    return 0;
}
