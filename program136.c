// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>


enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};


int performOperation(enum Operation choice, int num1, int num2) {
    switch (choice) {
        case ADD:
            return num1 + num2;
        case SUBTRACT:
            return num1 - num2;
        case MULTIPLY:
            return num1 * num2;
        default:
            printf("Invalid choice\n");
            return 0;
    }
}

int main() {
    int choice, num1, num2, result;

   
    printf("Select an operation:\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice (1/2/3): ");
    scanf("%d", &choice);

    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = performOperation(choice, num1, num2);

   
    printf("Result: %d\n", result);

    return 0;
}