//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int firstDigit, lastDigit, digits = 0, temp = num;

    // Find the last digit
    lastDigit = num % 10;

    // Find the first digit and count the number of digits
    while (temp != 0) {
        firstDigit = temp % 10;
        temp /= 10;
        digits++;
    }

    // Remove the first digit from the original number
    num = num - (firstDigit * pow(10, digits - 1));

    // Add the last digit to the front
    num = (lastDigit * pow(10, digits - 1)) + num;

    printf("Number after swapping first and last digit: %d\n", num);

    return 0;
}
