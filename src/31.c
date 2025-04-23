#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n > 0) {
        for (int i = 1; i <= n; ++i) {
            printf("*");
        }
        
        return 0;
    } else {
        puts("Error: Input should be a positive integer.");
        return 1;
    }
}
