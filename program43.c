//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

// Function to calculate the factorial of a number
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to check if a number is a strong number
int isStrongNumber(int num) {
    int originalNum = num;
    long long sumOfFactorials = 0;
    int digit;

    // Handle the case of 0 separately as 0! is 1
    if (num == 0) {
        return (factorial(0) == 0); // 0 is not a strong number
    }

    while (num > 0) {
        digit = num % 10; // Extract the last digit
        sumOfFactorials += factorial(digit); // Add the factorial of the digit to the sum
        num /= 10; // Remove the last digit
    }

    return (sumOfFactorials == originalNum); // Return true if the sum equals the original number
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isStrongNumber(number)) {
        printf("%d is a Strong number.\n", number);
    } else {
        printf("%d is not a Strong number.\n", number);
    }

    return 0;
}