#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    int a = 11, b = 22;
    int (*sum)(int, int) = add;

    printf("%d + %d = %d\n", a, b, sum(a, b));
    return 0;
}
