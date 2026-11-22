#include <stdio.h>

int main(void) {
    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int s = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            s += a[i][j];
        }
    }

    printf("합계: %d, 평균: %.2f\n", s, s / 12.0);
    return 0;
}
