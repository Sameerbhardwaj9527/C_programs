//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profitLoss;

    // Input cost price and selling price
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    // Calculate profit or loss
    profitLoss = sellingPrice - costPrice;

    // Determine profit or loss percentage
    if (profitLoss > 0) {
        printf("Profit %.2f%%\n", (profitLoss / costPrice) * 100);
    } else if (profitLoss < 0) {
        printf("Loss %.2f%%\n", (-profitLoss / costPrice) * 100);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
