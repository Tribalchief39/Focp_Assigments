#include <stdio.h>

int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    
    float marks[num_students];
    float sum = 0;

    for (int i = 0; i < num_students; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    
    float average = sum / num_students;
    printf("Average score: %.2f\n", average);
    return 0;
}
