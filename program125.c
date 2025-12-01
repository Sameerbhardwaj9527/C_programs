// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/

#include <stdio.h>

int main() {
    FILE *file;
    char inputText[100];
    
   
    file = fopen("data.txt", "a");
    if (file == NULL) {
        printf("Error! Could not open the file.\n");
        return 1;
    }

    
    printf("Enter the text to append: ");
    getchar();  
    fgets(inputText, sizeof(inputText), stdin);

    
    fprintf(file, "%s", inputText);

   
    fclose(file);

    
    printf("File updated successfully with appended text.\n");

    return 0;