#include <stdio.h>

int main() {
    int num_students;
    
    printf("Enter the no. of students: ");
    scanf("%d", &num_students);
    
    float marks[num_students];
    
    for (int i = 0; i < num_students; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }
    
    int found = 0;
    for (int i = 0; i < num_students; i++) {
        if (marks[i] == 99) {
            found = i + 1;
            break;
        }
    }
    
    if (found != 0) {
        printf("The first student who scored 99 is %d.\n", found);
    } else {
        printf("No student scored 99.\n");
    }

    return 0;
}
