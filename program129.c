// Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/

#include <stdio.h>

int main() {
    FILE *file;
    int number;
    int sum = 0;
    int count = 0;

   
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error! Could not open file.\n");
        return 1;
    }

   
    while (fscanf(file, "%d", &number) == 1) {
        sum += number; 
        count++;      
    }

    
    fclose(file);

    
    if (count == 0) {
        printf("No numbers in the file.\n");
    } else {
     
        double average = (double)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    }

    return 0;
}