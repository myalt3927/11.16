#include <stdio.h>

int main(void) {
    int sum = 0;

    for (int i = 5; i <= 10; i++) {
        sum += i;
    }

    printf("5부터 10까지의 합: %d\n", sum);
    return 0;
}
