#include <stdio.h>
#include <stdlib.h>

#define STUDENTS 10
#define SUBJECTS 5
#define PASS_MARK 40

void inputMarks(int marks[STUDENTS][SUBJECTS]) {
    printf("Enter marks for each subject of %d students:\n", STUDENTS);
    for (int i = 0; i < STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
}

void determinePassFail(int marks[STUDENTS][SUBJECTS]) {
    printf("\nPass/Fail Status:\n");
    for (int i = 0; i < STUDENTS; i++) {
        int passCount = 0;
        for (int j = 0; j < SUBJECTS; j++) {
            if (marks[i][j] >= PASS_MARK) {
                passCount++;
            }
        }
        if (passCount == SUBJECTS) {
            printf("Student %d: Passed\n", i + 1);
        } else {
            printf("Student %d: Failed\n", i + 1);
        }
    }
}

int main() {
    int marks[STUDENTS][SUBJECTS];

    inputMarks(marks);
    determinePassFail(marks);

    return 0;
}
