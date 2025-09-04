//Q30: Write a program to reverse a given number. 

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include <stdio.h>

int main() {
    int number, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Store the original number to print it later
    int originalNumber = number;

    while(number != 0) {
        // Get the last digit
        remainder = number % 10;

        // Append the last digit to the reverse number
        reverse = reverse * 10 + remainder;

        // Remove the last digit from the original number
        number /= 10;
    }

    printf("Reversed Number: %d\n", reverse);

    return 0;
}