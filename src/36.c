#include <stdio.h>

void main() {
    int i;
    printf("Enter how many numbers you want to enter:\n");
    scanf("%d", &i);
    
    if (i > 0) {
        for (i; i >= 1; i--) {
            printf("%d * %d = %d\n", i, i - 1, i * (i - 1));
        }
    } else {
        printf("Invalid input! You cannot enter a negative number.\n");
    }
}
