#include <stdio.h>

struct employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct employee emp1, emp2;

    // Input data for first employee
    printf("Enter name of first employee: ");
    scanf("%s", emp1.name);
    printf("Enter id of first employee: ");
    scanf("%d", &emp1.id);
    printf("Enter total salary of first employee:");
    scanf("%f", &emp1.salary);
    printf("\n\n");

    // Input data for second employee
    printf("Enter name of second employee: ");
    scanf("%s", emp2.name);
    printf("Enter id of second employee: ");
    scanf("%d", &emp2.id);
    printf("Enter total salary of second employee: ");
    scanf("%f", &emp2.salary);

    // Display information of both employees
    printf("\nInformation of first employee:\n");
    printf("Employee Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Salary: %.2f\n\n", emp1.salary);

    printf("Information of second employee:\n");
    printf("Name: %s\n", emp2.name);
    printf("ID: %d\n", emp2.id);
    printf("Salary: %.2f\n\n", emp2.salary);

    return 0;
}
