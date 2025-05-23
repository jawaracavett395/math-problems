#include <stdio.h>

int main() {
    int i;
    printf("Enter the number of rows: ");
    scanf("%d", &i);
    for (i = 1; i <= i; ++i) {
        if (i % 2 == 0)
            printf("* ");
        else
            printf("# ");
    }
    printf("\n");
    return 0;
}
