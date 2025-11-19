#include <stdio.h>

struct Employee {
    char name[50]; // Array to store the name. Max 49 chars + null terminator.
    int age;       // Integer to store the age.
    float salary;  // Float to store the salary.
};


int main() {

    struct Employee emp; // Declare a variable of type Employee

    printf("Enter employee details:\n");

    // Prompt and read the employee's name
    printf("Enter Name: ");
    // scanf("%s", ...) reads a single word (sequence of non-whitespace characters)
    // and stores it in the char array. It does not require string.h.
    scanf("%s", emp.name);

    // Prompt and read the employee's age
    printf("Enter Age: ");
    scanf("%d", &emp.age);

    // Prompt and read the employee's salary
    printf("Enter Salary: ");
    scanf("%f", &emp.salary);

    // Display the entered employee details
    printf("\n--- Employee Information ---\n");
    printf("Name: %s\n", emp.name);
    printf("Age: %d\n", emp.age);
    printf("Salary: %.2f\n", emp.salary); // Display salary with two decimal places

    return 0; // Indicate successful program execution
}
