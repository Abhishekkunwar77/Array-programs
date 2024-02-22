#include <stdio.h>
struct employee {
    char name[50];
    int id;
    float salary;
};
int main() {
    struct employeedetails;
    
    printf("Enter name of first employee: ");
    scanf("%s", &employeedetails.name);
    printf("Enter id of first employee: ");
    scanf("%d", &employeedetails.id);
    printf("Enter total salary of first employee: ");
    scanf("%f", &employeedetails.salary);

   
    printf("Enter name of second employee: ");
    scanf("%s", &employeedetails.name);
    printf("Enter id of second employee: ");
    scanf("%d", &employeedetails.id);
    printf("Enter total salary of second employee: ");
    scanf("%f", &employeedetails.salary);

    
    printf("\nInformation of first student:\n");
    printf(" Employee Name: %s\n", employeedetails.name);
    printf("Age: %d\n",employeedetails.id);
    printf("Tsalary: %.2f\n\n", employeedetails.salary);

    printf("Information of second student:\n");
    printf("Name: %s\n",employeedetails.name);
    printf("Age: %d\n", employeedetails.id);
 printf("salary: %.2f\n\n", employeedetails.salary);

    return 0;
}
