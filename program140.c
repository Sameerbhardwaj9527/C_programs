// Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include <stdio.h>


enum Gender {
    MALE = 0,
    FEMALE,
    OTHER
};


struct Person {
    char name[50];
    enum Gender gender;  
};


const char* getGenderString(enum Gender gender) {
    switch (gender) {
        case MALE: return "Male";
        case FEMALE: return "Female";
        case OTHER: return "Other";
        default: return "Unknown";
    }
}

int main() {
    
    struct Person person;
    
   
    printf("Enter the name of the person: ");
    scanf("%s", person.name);
    
   
    int genderChoice;
    printf("Enter gender (0 for Male, 1 for Female, 2 for Other): ");
    scanf("%d", &genderChoice);
    
    
    if (genderChoice >= MALE && genderChoice <= OTHER) {
        person.gender = (enum Gender)genderChoice;
    } else {
        printf("Invalid gender choice.\n");
        return 1;
    }

    
    printf("%s's gender is: %s\n", person.name, getGenderString(person.gender));

    return 0;
}