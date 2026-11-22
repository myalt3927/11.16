#include <stdio.h>

struct Student {
    char name[20];
    int kr, en;
};

int main(void) {
    struct Student a[3] = {
        {"J.C. Shim", 80, 90},
        {"G.D. Hong", 70, 85},
        {"J.Y. Ko", 95, 100}
    };

    for (int i = 0; i < 3; i++) {
        printf("%s 평균: %.2f\n", a[i].name, (a[i].kr + a[i].en) / 2.0);
    }
    return 0;
}
