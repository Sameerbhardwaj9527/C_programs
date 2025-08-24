//🖥️Q5 (User Inputs, Operations & Output)
//Write a program to convert temperature from Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter the Temperature in Celsius: ");

    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    printf("The Temperature in Fahrenheit is: %.2f\n", fahrenheit);

    return 0;
}