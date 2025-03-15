#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    float result = (float)num1 / num2;
    printf("The solution is: %.2f\n", result);
    return 0;
}
