//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result = 0, n = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Find the number of digits
    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;

    // Calculate the sum of the nth powers of the digits
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if (result == num) {
        printf("Armstrong\n");
    } else {
        printf("Not Armstrong\n");
    }

    return 0;
}
