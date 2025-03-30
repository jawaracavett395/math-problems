#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int *p = (int *)malloc(n * sizeof(int));
    if (!p) {
        printf("Memory allocation failed.\n");
        return 1;
    }
    for (int i = 0; i < n; ++i) {
        p[i] = i + 1;
    }
    for (int i = 0; i < n / 2; ++i) {
        int temp = p[n - 1 - i];
        p[n - 1 - i] = p[i];
        p[i] = temp;
    }
    printf("Array after rearrangement:\n");
    for (int i = 0; i < n; ++i) {
        printf("%d ", p[i]);
    }
    free(p);
    return 0;
}
