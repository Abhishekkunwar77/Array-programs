#include <stdio.h>
// Define structure for student
struct student {
    char name[50];
    int age;
    float total_marks;
};

int main() {
    struct student s[2]; // Array to store data for two students
    float total_marks_sum = 0; // Variable to store the sum of total marks

    // Input data for two students
    for (int i = 0; i < 2; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Age: ");
        scanf("%d", &s[i].age);
        printf("Total Marks: ");
        scanf("%f", &s[i].total_marks);

        // Add total marks to the sum
        total_marks_sum += s[i].total_marks;
    }

    // Display information for two students
    printf("\nInformation for two students:\n");
    for (int i = 0; i < 2; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
        printf("Total Marks: %.2f\n", s[i].total_marks);
    }

    // Calculate and display the average total marks
    float average_total_marks = total_marks_sum / 2.0;
    printf("\nAverage Total Marks: %.2f\n", average_total_marks);

    return 0;
}
