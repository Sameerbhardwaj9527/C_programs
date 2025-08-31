//🔀Q18 (Conditional Statements)
//Write a program to assign grades based on a percentage input.

#include <stdio.h>

int main() {
    float percentage;
    char grade;

    // Input percentage
    printf("Enter percentage: ");
    scanf("%f", &percentage);

    // Determine grade
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output grade
    printf("Grade: %c\n", grade);

    return 0;
}
