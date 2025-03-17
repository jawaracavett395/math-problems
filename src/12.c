#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1, num2;
    float result;

    // Get two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate the sum of the two numbers
    result = num1 + num2;

    // Print the result
    printf("The sum is: %f\n", result);

    return 0;
}
