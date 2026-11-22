#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *a = malloc(3 * sizeof(int));
    if (a == NULL) {
        printf("메모리 할당에 실패했습니다.\n");
        return 1;
    }

    a[0] = 11;
    a[1] = 33;
    a[2] = 55;

    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += a[i];
    }

    printf("합: %d\n", sum);
    free(a);
    return 0;
}
