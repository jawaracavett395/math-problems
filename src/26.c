#include <stdio.h>

int main() {
    int i = 0;
    while (i <= 15) {
        if (i % 2 == 0) {
            printf("even\n");
        } else {
            printf("odd\n");
        }
        i++;
    }
    return 0;
}
