// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include <stdio.h>
#include <string.h>

// Define an enum for user roles
enum UserRole {
    ADMIN = 1,
    USER,
    GUEST
};

// Function to display a message based on the user's role
void displayMessage(enum UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome Guest! You have view-only access.\n");
            break;
        default:
            printf("Invalid role\n");
            break;
    }
}

int main() {
    char roleName[10];
    enum UserRole role;

    
    printf("Enter your role (ADMIN, USER, GUEST): ");
    scanf("%s", roleName);

    
    for (int i = 0; roleName[i]; i++) {
        roleName[i] = toupper(roleName[i]);
    }

    
    if (strcmp(roleName, "ADMIN") == 0) {
        role = ADMIN;
    } else if (strcmp(roleName, "USER") == 0) {
        role = USER;
    } else if (strcmp(roleName, "GUEST") == 0) {
        role = GUEST;
    } else {
        printf("Invalid role entered!\n");
        return 1;
    }

    
    displayMessage(role);

    return 0;
}