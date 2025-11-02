/*Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

*/
#include <stdio.h>

int main() {
    int i, j, k;
    // Outer loop for rows
    for (i = 1; i <= 5; i++) {
        // Print leading spaces
        for (j = 1; j < i; j++) {
            printf(" ");
        }
        // Print stars
        for (k = i; k <= 5; k++) {
            printf("*");
        }
        printf("\n"); // Move to next line
    }
    return 0;
}
