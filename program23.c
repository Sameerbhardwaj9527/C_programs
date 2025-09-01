// Q23: Write a program to calculate a library fine based on late days.

/*
Sample Test Cases:
Input 1:
4
Output 1:
Fine ₹8

Input 2:
8
Output 2:
Fine ₹32

Input 3:
15
Output 3:
Fine ₹90

Input 4:
31
Output 4:
Membership Cancelled

*/

#include <stdio.h>

int main() {
    int late_days;
    printf("Enter the number of late days: ");
    scanf("%d", &late_days);

    if (late_days > 0 && late_days <= 30) {
        int fine = late_days * 2;
        printf("Fine ₹%d\n", fine);
    } else if (late_days > 30) {
        printf("Membership Cancelled\n");
    } else {
        printf("Invalid input\n");
    }

    return 0;
}