
int main(void) {
    int x = 4;
    int y = 5;
    int z = add(x, y);
    printf("The sum of %d and %d is %d.\n", x, y, z);
    return 0;
}

int add(int x, int y) {
    return x + y;
}