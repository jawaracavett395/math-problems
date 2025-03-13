#include <stdio.h>
#include <stdlib.h>

int main() {
    int randNum = (rand() % 10) + 1;
    printf("Random number: %d\n", randNum);
    return 0;
}
