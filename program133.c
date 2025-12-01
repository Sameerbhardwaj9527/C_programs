
// Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>


enum Month {
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};


int getDaysInMonth(enum Month month, int isLeapYear) {
    switch (month) {
        case JANUARY: case MARCH: case MAY: case JULY: case AUGUST: case OCTOBER: case DECEMBER:
            return 31;
        case APRIL: case JUNE: case SEPTEMBER: case NOVEMBER:
            return 30;
        case FEBRUARY:
            if (isLeapYear) {
                return 29; 
            } else {
                return 28; 
            }
        default:
            return 0; 
    }
}

int main() {
    enum Month month;
    char monthName[10];
    int isLeapYear;

    
    printf("Enter the month (e.g., JANUARY, FEBRUARY, MARCH, ...): ");
    scanf("%s", monthName);

   
    printf("Is it a leap year? (1 for Yes, 0 for No): ");
    scanf("%d", &isLeapYear);

    
    for (int i = 0; monthName[i]; i++) {
        monthName[i] = toupper(monthName[i]);
    }

   
    if (strcmp(monthName, "JANUARY") == 0) {
        month = JANUARY;
    } else if (strcmp(monthName, "FEBRUARY") == 0) {
        month = FEBRUARY;
    } else if (strcmp(monthName, "MARCH") == 0) {
        month = MARCH;
    } else if (strcmp(monthName, "APRIL") == 0) {
        month = APRIL;
    } else if (strcmp(monthName, "MAY") == 0) {
        month = MAY;
    } else if (strcmp(monthName, "JUNE") == 0) {
        month = JUNE;
    } else if (strcmp(monthName, "JULY") == 0) {
        month = JULY;
    } else if (strcmp(monthName, "AUGUST") == 0) {
        month = AUGUST;
    } else if (strcmp(monthName, "SEPTEMBER") == 0) {
        month = SEPTEMBER;
    } else if (strcmp(monthName, "OCTOBER") == 0) {
        month = OCTOBER;
    } else if (strcmp(monthName, "NOVEMBER") == 0) {
        month = NOVEMBER;
    } else if (strcmp(monthName, "DECEMBER") == 0) {
        month = DECEMBER;
    } else {
        printf("Invalid month name.\n");
        return 1;
    }

   
    int days = getDaysInMonth(month, isLeapYear);

    
    if (month == FEBRUARY) {
        printf("FEBRUARY has %d days.\n", days);
    } else {
        printf("%s has %d days.\n", monthName, days);
    }

    return 0;
}
