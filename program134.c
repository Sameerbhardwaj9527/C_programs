
// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>


enum Status {
    SUCCESS = 0,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status status;

    
    status = FAILURE;

    
    if (status == SUCCESS) {
        printf("Operation successful\n");
    } else if (status == FAILURE) {
        printf("Operation failed\n");
    } else if (status == TIMEOUT) {
        printf("Operation timed out\n");
    }

    return 0;
}
