// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;
    char sourceFilename[100], destinationFilename[100];

    
    printf("Enter the source filename: ");
    scanf("%99s", sourceFilename);
    printf("Enter the destination filename: ");
    scanf("%99s", destinationFilename);

    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Error! Could not open source file.\n");
        return 1;
    }

    destinationFile = fopen(destinationFilename, "w");
    if (destinationFile == NULL) {
        printf("Error! Could not open destination file.\n");
        fclose(sourceFile);  
        return 1;
    }

    
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    
    fclose(sourceFile);
    fclose(destinationFile);

    
    printf("File copied successfully to %s\n", destinationFilename);

    return 0;
}