#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct S {
    int k, e, m;
};

int main(void) {
    struct S a[2];
    FILE *p = fopen("my.bin", "rb");

    if (p == NULL) {
        printf("먼저 4번 프로그램을 실행해 주세요.\n");
        return 1;
    }
    if (fread(a, sizeof(struct S), 2, p) != 2) {
        printf("성적을 읽을 수 없습니다.\n");
        fclose(p);
        return 1;
    }
    fclose(p);

    printf("개인1: %.2f, 개인2: %.2f\n",
           (a[0].k + a[0].e + a[0].m) / 3.0,
           (a[1].k + a[1].e + a[1].m) / 3.0);
    printf("국어: %.2f, 영어: %.2f, 수학: %.2f\n",
           (a[0].k + a[1].k) / 2.0,
           (a[0].e + a[1].e) / 2.0,
           (a[0].m + a[1].m) / 2.0);
    return 0;
}
