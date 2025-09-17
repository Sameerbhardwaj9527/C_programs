//Q40: Write a program to find the 1’s complement of a binary number and print it.

/*
Sample Test Cases:
Input 1:
1010
Output 1:
0101

Input 2:
1111
Output 2:
0000

*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter a binary number: ");
    scanf("%d", &num);

    int complement = 0;
    int place = 1;

    while (num != 0) {
        int bit = num % 10;
        complement += (1 - bit) * place;
        num /= 10;
        place *= 10;
    }

    printf("1's complement is: %d\n", complement);

    return 0;
}
