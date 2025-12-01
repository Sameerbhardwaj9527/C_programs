// Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include <stdio.h>


struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student students[5];
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%d", &students[i].marks);

        printf("\n");
    }

   
    printf("-------------------------------------------------\n");
    printf("| %-10s | %-5s | %-5s |\n", "Name", "Roll", "Marks");
    printf("-------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("| %-10s | %-5d | %-5d |\n", students[i].name, students[i].roll_no, students[i].marks);
    }

    printf("-------------------------------------------------\n");

    return 0;
}