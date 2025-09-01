// Q24: Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>

int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    float bill;
    if (units <= 100) {
        bill = units * 5;
    } else if (units <= 200) {
        bill = 100 * 5 + (units - 100) * 7;
    } else {
        bill = 100 * 5 + 100 * 7 + (units - 200) * 10;
    }

    printf("Bill: ₹%.2f\n", bill);
    return 0;
}
