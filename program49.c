/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345

*/
#include <stdio.h>

int main() {
    int i, j;
    // Outer loop for rows
    for (i = 5; i >= 1; i--) {
        // Inner loop to print numbers starting from i up to 5
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to next line after each row
    }
    return 0;
}
